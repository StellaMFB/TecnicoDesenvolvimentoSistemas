from flask import Flask, request, render_template

app = Flask(__name__)

lista=[]

@app.route('/')
def index():
    return render_template('index.html', lista=lista)

@app.route('/adicionar', methods=['post'])
def adicionar():
    fruta=request.form['fruta']
    lista.append(fruta)
    return render_template('index.html', lista=lista)

@app.route('/excluir', methods=['post'])
def excluir():
    fruta=request.form['i']
    lista.remove(fruta)
    return render_template('index.html', lista=lista)

if __name__ == '__main__':
    app.run(debug=True)
