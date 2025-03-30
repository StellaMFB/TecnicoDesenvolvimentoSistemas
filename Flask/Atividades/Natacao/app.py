#usar card para exibir mensagem / fazer carousel com 3 imagens de natação

from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def index():
    mensagem = 'Selecione a categoria para ver mais informações'
    return render_template('index.html', mensagem = mensagem)

@app.route('/verificar')
def verificar():
    categoria = request.args["categoria"]
    
    match (categoria):
        case 'infantil':
            mensagem = 'Informações da Categoria Infantil<br><br>Idade: 3 a 10 anos<br><br>Dia e horário das aulas: Segunda e quarta, 10h - 11h'
        case 'juvenil':
            mensagem = 'Informações da Categoria Juvenil<br><br>Idade: 11 a 16 anos<br><br>Dia e horário das aulas: Segunda e quarta, 13h - 14h'
        case 'adulto':
            mensagem = 'Informações da Categoria Adulto<br><br>Idade: a partir de 17 anos<br><br>Dia e horário das aulas: Segunda e quarta, 15h - 16h'
    
    return render_template('index.html', categoria =  categoria, mensagem = mensagem)

if __name__ == ('__main__'):
    app.run(debug=True)