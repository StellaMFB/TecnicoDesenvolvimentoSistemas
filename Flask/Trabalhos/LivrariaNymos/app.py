from flask import Flask, render_template, request, redirect, url_for
import os

app = Flask (__name__)

upload_folder = 'static/'
app.config['upload_folder'] = upload_folder

ficcao = [
    {'nome': 'Frankenstein', 'autor(a)': 'Mary Shelley', 'valor': '46.88', 'imagem': 'frankenstein.jpg'},
    {'nome': '1984', 'autor(a)': 'George Orwell', 'valor': '17.45', 'imagem': '1984.jpg'},
    {'nome': 'Eu, Robô', 'autor(a)': 'Isaac Asimov', 'valor': '49.68', 'imagem': 'robo.jpg'},
    {'nome': 'Encontro com Rama', 'autor(a)': 'Arthur C. Clarke', 'valor': '55.93', 'imagem': 'rama.jpg'}
]

romance = [
    {'nome': 'Romeu e Julieta', 'autor(a)': 'William Shakespeare', 'valor': '36.24', 'imagem': 'romeu.jpg'},
    {'nome': 'O Fabricante de Lágrimas', 'autor(a)': 'Erin Doom', 'valor': '60.70', 'imagem': 'fabricante.jpg'},
    {'nome': 'A Culpa é das Estrelas', 'autor(a)': 'John Green', 'valor': '43.89', 'imagem': 'estrelas.jpg'},
    {'nome': 'O Morro dos Ventos Uivantes', 'autor(a)': 'Emily Bronte', 'valor': '16.67', 'imagem': 'morro.jpg'}
]
terror = [
    {'nome': 'A Coisa', 'autor(a)': 'Stephen King', 'valor': '84.58', 'imagem': 'it.jpg'},
    {'nome': 'O Corvo', 'autor(a)': 'Edgar Allan Poe', 'valor': '41.44', 'imagem': 'corvo.jpg'},
    {'nome': 'O Fantasma da Ópera', 'autor(a)': 'Gaston Leroux', 'valor': '24.60', 'imagem': 'fantasma.jpg'},
    {'nome': 'O Exorcista', 'autor(a)': 'William Peter Blatty', 'valor': '44.44', 'imagem': 'exorcista.jpg'}
]

@app.route('/')
def index():
    return render_template('index.html', ficcao=ficcao, romance=romance, terror=terror)

@app.route('/admin')
def admin():
    return render_template('admin.html', ficcao=ficcao, romance=romance, terror=terror)

@app.route('/adicionar', methods=['POST'])
def add():
    nome_livro = request.form['nome']
    autor_livro = request.form['autor(a)']
    valor_livro = request.form['valor']
    imagem_livro = request.files['imagem']
    genero = request.form["genero"]

    if imagem_livro:
        imagem_path = os.path.join(app.config['upload_folder'], imagem_livro.filename)
        imagem_livro.save(imagem_path)
        imagem_nome = imagem_livro.filename

    else:
        imagem_nome = 'default.png'
    
    if genero == 'ficcao':
        ficcao.append({'nome': nome_livro, 'autor(a)': autor_livro, 'valor': valor_livro, 'imagem': imagem_nome})

    elif genero == 'romance':
        romance.append({'nome': nome_livro, 'autor(a)': autor_livro, 'valor': valor_livro, 'imagem': imagem_nome})
    else: 
        terror.append({'nome': nome_livro, 'autor(a)': autor_livro, 'valor': valor_livro, 'imagem': imagem_nome})


    return redirect(url_for('index'))

@app.route('/excf', methods=['post'])
def excf():
    livro_nome = request.form['livro']

    for livro in ficcao:
        if livro['nome'] == livro_nome:
            ficcao.remove(livro)
            break
    return render_template('index.html', ficcao=ficcao, romance=romance, terror=terror)

@app.route('/excr', methods=['post'])
def excr():
    livro_nome = request.form['livro']

    for livro in romance:
        if livro['nome'] == livro_nome:
            romance.remove(livro)
            break
    return render_template('index.html', ficcao=ficcao, romance=romance, terror=terror)

@app.route('/exct', methods=['post'])
def exct():
    livro_nome = request.form['livro']

    for livro in terror:
        if livro['nome'] == livro_nome:
            terror.remove(livro)
            break
    return render_template('index.html', ficcao=ficcao, romance=romance, terror=terror)

if __name__ == '__main__':
    app.run(debug=True)