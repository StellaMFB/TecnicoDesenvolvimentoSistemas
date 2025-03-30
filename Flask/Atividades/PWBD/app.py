from flask import Flask, render_template, request, redirect, url_for, flash
import mysql.connector
#pip intall mysql-connector-python

app = Flask(__name__)
app.secret_key = 'Nymos01040'

db = mysql.connector.connect(
    host = 'localhost', 
    user = 'root', 
    password = 'SUA_SENHA', 
    database = 'pw_bd'
)

cursor = db.cursor()

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/cadastrar', methods=['post'])
def cadastrar():
    nome = request.form['nome']
    email = request.form['email']
    senha = request.form['senha']
    
    if nome and email and senha:
        cursor.execute('INSERT INTO usuario (nome, email , senha) VALUES (%s, %s, %s);', (nome, email, senha))
        db.commit()
        flash('Usuário cadastrado com sucesso!')
        return redirect(url_for('index'))
    else:
        flash('Todos os campos são obrigatórios')
        return redirect(url_for('index'))


if __name__ == '__main__':
    app.run(debug=True)
