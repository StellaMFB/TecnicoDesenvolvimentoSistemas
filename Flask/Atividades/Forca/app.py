from flask import Flask, render_template, request
import random

app = Flask(__name__)

palavras = ["css", "html", "python", "flask"]
imagens = ['0.png', '1.png', '2.png', '3.png', '4.png', 'fim.png']

def selecionar_palavra():
    return random.choice(palavras)

def verificar_fim(palavra, letras_corretas):
    return all(letra in letras_corretas for letra in palavra)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/jogar', methods=['POST'])
def jogar():
    palavra = request.form.get('palavra')
    letras_corretas = request.form.get('letras_corretas', '')
    letras_erradas = request.form.get('letras_erradas', '')

    if not palavra:
        palavra = selecionar_palavra()
        letras_corretas = ''
        letras_erradas = ''

    letra = request.form.get('letra', '').lower()

    if letra:
        if letra in palavra:
            letras_corretas += letra
        else:
            letras_erradas += letra

    ganhou = verificar_fim(palavra, letras_corretas)
    perdeu = len(letras_erradas) >= len(imagens) - 1

    if ganhou:
        mensagem = "Você ganhou! A palavras era: " + palavra
        return render_template('fim.html', mensagem=mensagem, imagem_forca=imagens[0])
    elif perdeu:
        mensagem = "Você perdeu! A palavra era: " + palavra
        imagem_forca = imagens[-1]
        return render_template('fim.html', mensagem=mensagem, imagem_forca=imagem_forca)
    else:
        imagem_forca = imagens[len(letras_erradas)]
        return render_template('jogo.html', palavra=palavra, letras_corretas=letras_corretas, letras_erradas=letras_erradas, imagem_forca=imagem_forca, ganhou=ganhou)

@app.route('/editar')
def editar():
    palavra = request.args.get('palavra')
    if palavra:
        palavras.append(palavra)
    return render_template('editar.html', palavras=palavras)

@app.route('/excluir', methods=['POST'])
def excluir():
    palavra=request.form['i']
    palavras.remove(palavra)
    return render_template('editar.html', palavras=palavras)

@app.route('/fim')
def fim():
    return render_template('fim.html')

if __name__ == '__main__':
    app.run(debug=True)