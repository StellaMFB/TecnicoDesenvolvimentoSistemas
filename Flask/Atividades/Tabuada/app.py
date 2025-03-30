from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/tabuada', methods=['post'])
def tabuada():
    numero = int(request.form['numero'])
    resultado = '<br>'
    i = 1
    
    while i <= 10:
        resultado += f'{numero} X {i} = {numero * i}<br>'
        i += 1
        
    return render_template('index.html', resultado = resultado)

if __name__ == '__main__':
    app.run(debug=True)
