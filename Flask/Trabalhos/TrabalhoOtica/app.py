from flask import Flask, render_template, request
app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/compra')
def pagina2():
    produto = request.args["produto"]
    quantidade = int(request.args.get('quantidade'))
    mpagamento= request.args.get('mpagamento')

    if produto == 'Óculos preto quadrado de acetato':
        valor = 370
    elif produto == 'Óculos redondo dourado de metal':
        valor = 410
    elif produto == 'Óculos preto quadrado de metal':
        valor = 399
    elif produto == 'Óculos de grau nude de acetato':
        valor = 349
    elif produto == 'Óculos de sol Oakley de acetato':
        valor = 490
    else:
        valor = 420
    
    if mpagamento == 'Crédito':
        desconto = 5
    else:
        desconto = 10


    return render_template('compra.html', produto = produto, quantidade = quantidade, mpagamento = mpagamento, desconto = desconto, valor = valor)

if __name__ == ('__main__'):
    app.run(debug=True)
