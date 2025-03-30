from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/comprar', methods=['POST'])
def comprar():
    produto = request.form['produto']
    
    match produto:
        case '1':
            return 'Camiseta PP - Valor R$ 20,00'
        case '2':
            return 'Camiseta P - Valor R$ 25,00'
        case '3':
            return 'Camiseta M - Valor R$ 30,00'
        case '4':
            return 'Camiseta G - Valor R$ 35,00'
        case '5':
            return 'Camiseta GG - Valor R$ 40,00'
        case _:
            return 'Opção inexistente'

if __name__ == '__main__':
    app.run(debug=True)