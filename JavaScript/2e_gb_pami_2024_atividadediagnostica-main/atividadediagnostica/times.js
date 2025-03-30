export function times(nome, time, background, brasao, borderColor, backColor, tColor) {
    document.body.style.backgroundImage = background
    let ftxt = document.getElementById('ftxt')
    let divtxt = document.getElementById('txt')
    let texto = document.createElement('h1')
    let img = document.createElement('img')
    
    texto.setAttribute('id', 'torcedor')
    img.setAttribute('id', 'brasao')
    img.setAttribute('src', brasao)

    divtxt.style.width = "50%"
    divtxt.style.borderRadius = "5%"
    divtxt.style.borderColor = borderColor
    divtxt.style.backgroundColor = backColor
    
    ftxt.style.margin = "5%"
    ftxt.innerHTML = ''
    ftxt.appendChild(texto)
    ftxt.appendChild(img)
    ftxt.style.textAlign = 'center'

    
    texto.innerHTML = `${nome}, você é torcedor(a) do ${time}!`
    texto.style.background = tColor
    texto.style.backgroundClip = 'text'
    texto.style.webkitTextFillColor = 'transparent'
    texto.style.fontSize = '310%'
    texto.style.fontWeight = 'bold'

    
    img.style.maxHeight = '40%'
    img.style.maxWidth = '40%'
    img.style.marginTop = '10%'
}