from flask import Flask, render_template, request, redirect, flash, url_for
import mysql.connector
import os
from werkzeug.utils import secure_filename

app = Flask(__name__)
app.secret_key = os.urandom(24)

UPLOAD_FOLDER = 'static/uploads'
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}
app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER

def allowed_file(filename):
    return '.' in filename and filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS

db = mysql.connector.connect(
    host='localhost',
    user='root',
    password='SUA_SENHA',
    database='catalogo_db'
)
cursor = db.cursor()

@app.route('/')
def index():
    cursor.execute('SELECT * FROM filmes ORDER BY ano DESC')
    filmes = cursor.fetchall()
    return render_template('index.html', filmes=filmes)

@app.route('/adicionar', methods=['POST'])
def adicionar():
    titulo = request.form['titulo']
    genero = request.form['genero']
    ano = request.form['ano']
    capa_filename = None
    
    if 'capa' in request.files:
        capa = request.files['capa']
        if capa and allowed_file(capa.filename):
            capa_filename = secure_filename(capa.filename)
            capa.save(os.path.join(app.config['UPLOAD_FOLDER'], capa_filename))
    
    cursor.execute(
        'INSERT INTO filmes (titulo, genero, ano, capa) VALUES (%s, %s, %s, %s)', 
        (titulo, genero, ano, capa_filename)
    )
    db.commit()
    
    flash('Filme adicionado com sucesso!')
    return redirect(url_for('index'))

@app.route('/excluir/<int:filme_id>', methods=['POST'])
def excluir(filme_id):
    cursor.execute('DELETE FROM filmes WHERE idFilme = %s', (filme_id,))
    db.commit()
    flash('Filme excluído com sucesso!')
    return redirect(url_for('index'))

@app.route('/editar/<int:filme_id>', methods=['POST'])
def editar(filme_id):
    cursor.execute('SELECT * FROM filmes WHERE idFilme = %s', (filme_id,))
    filme = cursor.fetchone
    return render_template('editar.html', filme=filme)

@app.route('/admin')
def exibir_filmes():
    cursor.execute('SELECT * FROM filmes ORDER BY genero, ano DESC')
    filmes = cursor.fetchall()
    return render_template('admin.html', filmes=filmes)

@app.route('/ficcao')
def ficcao():
    cursor.execute('SELECT * FROM filmes ORDER BY genero, ano DESC')
    filmes = cursor.fetchall()
    return render_template('ficcao.html', filmes=filmes)

@app.route('/animacao')
def animacao():
    cursor.execute('SELECT * FROM filmes ORDER BY genero, ano DESC')
    filmes = cursor.fetchall()
    return render_template('animacao.html', filmes=filmes)

@app.route('/comedia')
def comedia():
    cursor.execute('SELECT * FROM filmes ORDER BY genero, ano DESC')
    filmes = cursor.fetchall()
    return render_template('comedia.html', filmes=filmes)

if __name__ == '__main__':
    app.run(debug=True)
