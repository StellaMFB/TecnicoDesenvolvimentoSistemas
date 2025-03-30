from flask import Flask, render_template, request, redirect, flash, url_for
import mysql.connector
from datetime import datetime
import os

app = Flask(__name__)
app.secret_key = os.urandom(24)

db = mysql.connector.connect(
    host="localhost", 
    user="root", 
    password="SUA_SENHA", 
    database="diario_db"
)
cursor = db.cursor()

@app.route('/')
def index():
    cursor.execute("SELECT * FROM entradas ORDER BY data DESC")
    entradas = cursor.fetchall()
    today = datetime.now().date()
    return render_template('index.html', entradas=entradas, today=today)

@app.route('/add', methods=['POST'])
def add():
    data = request.form['data']
    nota = request.form['nota']
    sentimento = request.form['sentimento']
    
    if not sentimento:
        flash('Por favor, selecione um sentimento!')
        return redirect(url_for('index'))
    
    cursor.execute("INSERT INTO entradas (data, nota, sentimento) VALUES (%s, %s, %s)", (data, nota, sentimento))
    db.commit()
    
    flash('Entrada registrada com sucesso!')
    return redirect(url_for('index'))

@app.route('/excluir<int:entrada_id>', methods=['POST'])
def excluir(entrada_id):
    cursor.execute('DELETE FROM entradas WHERE idEntradas = %s', (entrada_id,))
    db.commit()
    flash('Nota excluída com sucesso!')
    return redirect(url_for('index.html'))

if __name__ == '__main__':
    app.run(debug=True)
