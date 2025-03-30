import { times } from './times.js'

let button = document.getElementById('btnconfirmar')
button.addEventListener('click', miniValidacao)

function miniValidacao() {
  const regex1 = /\W|_/
  const regex2 = /[0-9]/
  let txtnome = document.getElementById('txtnome').value

  if (txtnome.length < 3 || !isNaN(txtnome) || regex1.test(txtnome) || regex2.test(txtnome)) { 
    alert('Digite um nome válido.')
  } else {
    getTime(txtnome)
  }
}

function getTime(txtnome) {
    let time = document.getElementsByName('time')
  
    for (let i = 0; i < time.length; i++) {
      if (time[i].checked) {
        time = time[i].value
      }
    }

    if (time == 'Corinthians') {
      times(txtnome, 'Corinthians', 'url(/assets/background/corinthians.jpg)', 'assets/escudos/bCorinthians.png', 'rgb(240,230,140)', 'rgba(50,50,50,0.95)', 'linear-gradient(90deg, #808080 0%, #F8F8FF 100%)')
    } else if (time == 'Palmeiras') {
      times(txtnome, 'Palmeiras', 'url(/assets/background/palmeiras.jpg)', 'assets/escudos/bPalmeiras.png', 'rgb(248,248,255)', 'rgba(50,50,50,0.9)', 'linear-gradient(90deg, #2E8B57 0%, #F8F8FF 100%)')
    } else if (time == 'São Paulo') {
      times(txtnome, 'São Paulo', 'url(/assets/background/saopaulo.jpg)', 'assets/escudos/bSaopaulo.png', 'rgb(200,0,0)', 'rgba(50,50,50,0.9)', 'linear-gradient(90deg, #C80000 0%, #F8F8FF 100%)')
    } else {
      times(txtnome, 'Santos', 'url(/assets/background/santos.jpg)', 'assets/escudos/bSantos.png', 'rgb(248,248,255)', 'rgba(50,50,50,0.95)', 'linear-gradient(90deg, #808080 0%, #F8F8FF 100%)')
    }
  }
