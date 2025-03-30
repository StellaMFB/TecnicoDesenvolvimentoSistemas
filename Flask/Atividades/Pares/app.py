from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    resultado = '<br>Insira um número para verificar os pares.'
    return render_template('index.html', resultado=resultado)

@app.route('/verificar', methods=['post'])
def verificar():
    num = int(request.form['num'])
    resultado = '<br>'
    i = 1
    
    while i <= num:
        if i % 2 == 0:
            resultado += f'{i}<br>'
        i += 1
        
    return render_template('index.html', resultado = resultado)

if __name__ == '__main__':
    app.run(debug=True)