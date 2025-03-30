function reload(){
    window.location.reload();
}

export const exibirConteudo = (n) => {
    let conteudo = [];
    document.body.innerHTML = `
    <div class="row" id="r1">
        <div class="col-sm-6">
            <img src="" id="img"></img>
        </div>
    </div>
`;

    switch (n) {
        case 1:
            document.getElementById("img").src = ["assets/apollo.jpg"];

            conteudo.push(`
            Um ano após o Homem pisar a lua pela primeira vez, a Apollo 13 era apenas uma missão de rotina... até que surgiu um problema a mais de 350.000 mil quilómetros da Terra. Agora, presos numa nave avariada, três astronautas vêem-se imersos numa desesperada batalha pela sobrevivência apoiados por um Centro de Controle onde todos tentam trazê-los de volta.<br><br>`);
            conteudo.push(`Ron Howard.<br><br>`);
            conteudo.push(`William Broyles Jr. e Al Reinert.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`30 de junho de 1995.<br><br>`);
            conteudo.push(`Tom Hanks, Bill Paxton, Kevin Bacon, Gary Sinise, Ed Harris, Kathleen Quinlan, David Andrews, Xander Berkeley e Christian Clemenson.<br><br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#4c4c4c');

            break;
        case 2:
            document.getElementById("img").src = ["assets/teoria.jpg"];

            conteudo.push(`
            Em 1963, enquanto estudante de cosmologia na conceituada Universidade de Cambridge, no Reino Unido, Stephen consegue grandes avanços e está determinado a encontrar uma “simples, eloquente explicação” para o Universo. O seu mundo expande-se quando se apaixona por Jane Wilde, uma estudante de artes, também em Cambridge. Mas, aos 21 anos, este jovem saudável e ativo recebe um diagnóstico que vai abalar a sua vida: a degeneração dos neurónios motores vai atacar os seus membros e as suas capacidades, deixando-o com limitações de fala e movimento e terminando com a sua vida em dois anos. O amor incondicional e determinação de Jane são inabaláveis e os dois casam-se. Jane encoraja Stephen a terminar o seu doutoramento. Stephen embarca no seu mais ambicioso trabalho científico, estudando exatamente aquilo que pouco lhe resta - o tempo. Juntos desafiam todas as probabilidades, explorando novos caminhos na medicina e ciência, alcançando mais do que alguma vez poderiam ter sonhado.<br><br>`);
            conteudo.push(`James Marsh.<br><br>`);
            conteudo.push(`Anthony McCarten.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`29 de janeiro de 2015.<br><br>`);
            conteudo.push(`Eddie Redmayne, Felicity Jones, Charlie Cox, Emily Watson, Simon McBurney, David Thewlis, Maxine Peake, Harry Lloyd e Tom Prior.<br><br><br><br>`);
            conteudo.push('#132544');

            break;
        case 3:
            document.getElementById("img").src = ["assets/einstein.jpg"];

            conteudo.push(`O que aconteceu depois que Einstein fugiu da Alemanha nazista? Com imagens de arquivo e as palavras dele, obra mergulha na mente do gênio torturado.<br><br>`);
            conteudo.push(`Anthony Philipson.<br><br>`);
            conteudo.push(`Philip Ralph.<br><br>`);
            conteudo.push(`Sim.<br><br>`);
            conteudo.push(`16 de fevereiro de 2024.<br><br>`);
            conteudo.push(`Aidan McArdle, Andrew Havill, Rachel Barry, Helena Westerman, Leo Ashizawa, Jay Lewis Mitchell, Simon Markey, James Musgrave e Simon Haines.<br><br><br><br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#888888');

            break;
        case 4:
            document.getElementById("img").src = ["assets/estrelas.jpg"];

            conteudo.push(`
            A incrível história de Katherine Johnson, Dorothy Vaughn e Mary Jackson – mulheres afro-americanas brilhantes que trabalham na NASA e são os cérebros por trás de uma das maiores operações da história: o lançamento do astronauta John Glenn para a órbita, um incrível feito que restaura a confiança da nação, agita a Corrida Espacial e reanima o mundo. O trio visionário atravessa gênero e raças para inspirar as gerações a sonharem alto.<br><br>`);
            conteudo.push(`Theodore Melfi.<br><br>`);
            conteudo.push(`Theodore Melfi e Allison Schroeder.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`2 de fevereiro de 2017.<br><br>`);
            conteudo.push(`Taraji P. Henson, Octavia Spencer, Janelle Monáe, Kevin Costner, Kirsten Dunst, Jim Parsons, Mahershala Ali, Glen Powell e Ariana Neal.<br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#8d7165');

            break;
        case 5:
            document.getElementById("img").src = ["assets/gravidade.jpg"];

            conteudo.push(`
            A Dra. Ryan Stone é uma brilhante engenheira médica na sua primeira missão espacial, com o astronauta veterano Matt Kowalsky, no comando do seu último vôo antes de se reformar. Mas numa caminhada espacial de rotina acontece um desastre. A nave é destruída, deixando Stone e Kowalsky completamente sozinhos – amarrados apenas um ao outro e caindo em espiral pela escuridão. O silêncio ensurdecedor diz-lhes que perderam qualquer ligação com a Terra...e qualquer hipótese de salvamento. O medo transforma-se em pânico e cada respiração rouba o pouco oxigénio que têm disponível. O único caminho para voltarem a casa pode ser irem mais longe na imensidão aterrorizante do espaço.<br><br>`);
            conteudo.push(`Alfonso Cuarón.<br><br>`);
            conteudo.push(`Alfonso Cuarón e Jonás Cuarón.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`4 de outubro de 2013.<br><br>`);
            conteudo.push(`Sandra Bullock, George Clooney, Ed Harris, Orto Ignatiussen, Phaldut Sharma, Amy Warren e Basher Savage.<br><br><br><br><br><br><br>`);
            conteudo.push('#6990a4');

            break;
        case 6:
            document.getElementById("img").src = ["assets/interestelar.jpg"];

            conteudo.push(`
            Com o nosso tempo no planeta Terra a aproximar-se do fim, uma equipa de exploradores é enviada na missão mais importante da história da humanidade: viajar para além da nossa galáxia para descobrir se a humanidade tem futuro entre as estrelas.<br><br>`);
            conteudo.push(`Christopher Nolan.<br><br>`);
            conteudo.push(`Christopher Nolan e Jonathan Nolan.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`6 de novembro de 2014.<br><br>`);
            conteudo.push(`Matthew McConaughey, Anne Hathaway, Jessica Chastain, Michael Caine, Bill Irwin, Ellen Burstyn, Mackenzie Foy, Casey Affleck e John Lithgow.<br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#384d56');

            break;
        case 7:
            document.getElementById("img").src = ["assets/imitacao.jpg"];

            conteudo.push(`
            Durante o inverno de 1952, as autoridades britânicas entraram na casa do matemático, criptoanalista e herói de guerra Alan Turing para investigar um assalto. Em vez disso, prenderam Turing por ‘atentado ao pudor’, uma acusação que levaria à sua devastadora sentença pela ofensa criminal de homossexualidade — mal sabiam as autoridades que estavam a incriminar o pioneiro da computação moderna.<br>Na liderança de um grupo de acadêmicos, linguistas, campeões de xadrez e analistas, Turing foi reconhecido por quebrar o até aí indecifrável código da Enigma, a máquina utilizada pelos alemães na 2.ª Guerra Mundial.<br><br>`);
            conteudo.push(`Morten Tyldum.<br><br>`);
            conteudo.push(`Graham Moore.<br><br>`);
            conteudo.push(`Sim.<br><br>`);
            conteudo.push(`28 de setembro de 2014.<br><br>`);
            conteudo.push(`Benedict Cumberbatch, Keira Knightley, Matthew Goode, Rory Kinnear, Allen Leech, Matthew Beard, Charles Dance, Mark Strong e James Northcote.<br><br><br><br><br><br><br>`);
            conteudo.push(`#1f1f1f`);

            break;
        case 8:
            document.getElementById("img").src = ["assets/homem.jpg"];

            conteudo.push(`
            A história da primeira missão tripulada à lua, focando-se em Neil Armstrong e na década que antecedeu ao histórico voo espacial Apollo 11. Um relato visceral e intimo contado através da perspetiva de Armstrong, que explora os triunfos e os sacrifícios – de Armstrong, da sua família, companheiros e da própria nação – numa das missões mais perigosas da história da humanidade.<br><br>`);
            conteudo.push(`Damien Chazelle.<br><br>`);
            conteudo.push(`Josh Singer.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`11 de outubro de 2018.<br><br>`);
            conteudo.push(`Ryan Gosling, Claire Foy, Jason Clarke, Kyle Chandler, Corey Stoll, Patrick Fugit, Christopher Abbott, Ciarán Hinds e Olivia Hamilton.<br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#6d3d2f');

            break;
        case 9:
            document.getElementById("img").src = ["assets/marte.jpg"];

            conteudo.push(`
            Durante uma missão tripulada a Marte que tem de retirar às pressas para a Terra, o astronauta Mark Watney é dado como morto. Sobrevive, mas fica preso e sozinho no planeta. Com escassos mantimentos, terá que contar com a sua criatividade, inteligência e espírito de sobrevivência para se manter vivo e comunicar com a Terra.<br><br>`);
            conteudo.push(`Ridley Scott.<br><br>`);
            conteudo.push(`Drew Goddard.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`1 de outubro de 2015.<br><br>`);
            conteudo.push(`Matt Damon, Jessica Chastain, Kristen Wiig, Jeff Daniels, Michael Peña, Kate Mara, Sean Bean, Sebastian Stan e Aksel Hennie.<br><br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push('#2c201f');
            
            break;
        default:
            document.getElementById("img").src = ["assets/mente.jpg"];

            conteudo.push(`
            John Nash é um génio da matemática que, aos 21 anos, formulou um teorema que o tornou aclamado e reconhecido. Mas, aos poucos, o arrogante Nash transforma-se num homem sofrido e atormentado, que chega a ser diagnosticado como esquizofrénico. Porém, após anos de luta para se recuperar, ele consegue voltar à sociedade e acaba por receber o Prémio Nobel.<br><br>`);
            conteudo.push(`Ron Howard.<br><br>`);
            conteudo.push(`Akiva Goldsman.<br><br>`);
            conteudo.push(`Não.<br><br>`);
            conteudo.push(`15 de fevereiro de 2002.<br><br>`);
            conteudo.push(`Russell Crowe, Jennifer Connelly, Ed Harris, Paul Bettany, Christopher Plummer, Josh Lucas, Adam Goldberg, Anthony Rapp e Judd Hirsch.<br><br><br><br><br><br><br><br><br><br><br>`);
            conteudo.push(`#7c7444`)

            break;
    }
    document.body.style.marginTop = '2%';
    document.body.style.backgroundColor = conteudo[6];

    const h1 = document.createElement('h1');
    h1.innerHTML = `Informações`;
    h1.style.textAlign = 'center';

    const hr = document.createElement('hr');

    const h2 = document.createElement('h4');
    h2.innerHTML = `Sinopse:<br>`;

    const h3 =  document.createElement('h4');
    h3.innerHTML = `Direção:<br>`;

    const h4 = document.createElement('h4');
    h4.innerHTML = `Roteiro:<br>`;

    const h5 = document.createElement('h4');
    h5.innerHTML = `Disponível na Netflix:<br>`;

    const h6 = document.createElement('h4');
    h6.innerHTML = `Data de Lançamento:<br>`;

    const h7 = document.createElement('h4');
    h7.innerHTML = `Elenco Principal:<br>`;

    const btn = document.createElement('button');
    const lbl = document.createTextNode("Voltar");        
    btn.appendChild(lbl);   
    btn.setAttribute('type', 'button');
    btn.setAttribute('class', 'btn btn-primary');
    btn.addEventListener('click', reload);

    const div = document.createElement('div');
    div.setAttribute('class', 'col-sm-6');
    div.appendChild(h1);
    div.appendChild(hr);
    div.appendChild(h2);
    div.innerHTML += conteudo[0];
    div.appendChild(h3);
    div.innerHTML += conteudo[1];
    div.appendChild(h4);
    div.innerHTML += conteudo[2];
    div.appendChild(h5);
    div.innerHTML += conteudo[3];
    div.appendChild(h6);
    div.innerHTML += conteudo[4];
    div.appendChild(h7);
    div.innerHTML += conteudo[5];
    div.appendChild(btn);

    div.style.fontSize = '11pt'

    const r1 = document.getElementById('r1');
    r1.appendChild(div);

}
