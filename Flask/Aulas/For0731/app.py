from flask import Flask, render_template

app = Flask(__name__)
@app.route('/')

def index():
    num = ''

    """
    for i in range(1, 11):
        num += f'{i}<br>'

    for i in range(1, 21, 2):
        num += f'{i}<br>'

    for i in range(10, 0, -1):
        num += f'{i}<br>'

    for i in range(1, 11):
        num += f'8 x {i} = {8 * i}<br>'

    for i in range(0, 9, 2):
        num += f'{i}<br>'
    """

    for i in range(5, 0, -1):
        num += f'{i}<br>'

    return render_template('index.html', num=num)

if __name__ == '__main__':
    app.run(debug=True)
    