from flask import Flask, request
app = Flask(__name__)

@app.route('/')
def index():
    nome = request.args.get('nome')
    return f'Olá {nome}! Essa é a minha primeira página com Flask e Python!'

if __name__ == '__main__':
    app.run(debug = True)
