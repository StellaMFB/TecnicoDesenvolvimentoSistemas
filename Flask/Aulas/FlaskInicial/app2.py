from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/pagina2')
def pagina2():
    nome = request.args.get('nome')
    idade = int(request.args.get('idade'))
    return render_template('pagina2.html', nome = nome, idade = idade)

if __name__ == ('__main__'):
    app.run(debug=True)
