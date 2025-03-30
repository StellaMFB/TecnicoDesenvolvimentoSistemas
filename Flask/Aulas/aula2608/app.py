from flask import Flask, render_template, request, redirect, url_for
import os

app = Flask (__name__)

upload_folder = 'static/uploads'
app.config['upload_folder'] = upload_folder

produtos = [
    {'nome': 'arroz', 'valor': '35.50', 'imagem': 'default.png'},
    {'nome': 'feijão', 'valor': '12.99', 'imagem': 'default.png'},
    {'nome': 'açúcar', 'valor': '21.99', 'imagem': 'default.png'},
]

@app.route('/')
def index():
    return render_template('index.html', produtos=produtos)

@app.route('/admin')
def admin():
    return render_template('admin.html')

@app.route('/adicionar', methods=['POST'])
def add():
    nome_produto = request.form['nome']
    valor_produto = request.form['valor']
    imagem_produto = request.files['imagem']

    if imagem_produto:
        imagem_path = os.path.join(app.config['upload_folder'], imagem_produto.filename)
        imagem_produto.save(imagem_path)
        imagem_nome = imagem_produto.filename

    else:
        imagem_nome = 'default.png'

    produtos.append({'nome': nome_produto, 'valor': valor_produto, 'imagem': imagem_nome})
    return redirect(url_for('index'))

if __name__ == '__main__':
    app.run(debug=True)
