from flask import Flask, render_template, request

app = Flask(__name__)

mariana, claudio, pedro, qtd_alunos, i = 0, 0, 0, 10, 1


@app.route('/')
def index():
    return render_template('index.html')

@app.route('/verificar', methods=['post'])
def verificar():
    global mariana, claudio, pedro, qtd_alunos, i
    candidato = request.form["candidato"]

    if i <= qtd_alunos:
        match (candidato):
            case 'mariana':
                mariana += 1
            case 'claudio':
                claudio += 1
            case 'pedro':
                pedro += 1
        if i < qtd_alunos:
            resultado = f'<br>Votos Recebidos: {i} de {qtd_alunos}. Continue votando.'
        else:
            resultado = f'<br>Votação Encerrada!<br>Mariana: {mariana} votos<br>Claudio: {claudio} votos<br>Pedro: {pedro} votos<br>Representante: '
            if mariana > claudio and mariana > pedro:
                resultado += 'Mariana'
            elif claudio > mariana and claudio > pedro:
                resultado += 'Claudio'
            elif pedro > claudio and pedro > mariana:
                resultado += 'Pedro'
            else:
                resultado += 'Empate'
        i += 1

        
    return render_template('index.html', resultado = resultado)

if __name__ == '__main__':
    app.run(debug=True)