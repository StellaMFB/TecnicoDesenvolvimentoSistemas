import './style.css';
import { exibirConteudo } from './view/exibirConteudo.js';

document.addEventListener('DOMContentLoaded', () => {
    loadComponents();
});

const loadComponents = () => {
    const app = document.getElementById('app');

    app.innerHTML = `
        <div id="nav" class="row">
            <div class="col-12">
                <nav class="navbar" data-bs-theme="dark">
                    <div class="container-fluid">
                        <a class="navbar-brand" href="https://5173-stellamfb-2egbpami2024t-cjn4rcz1f3j.ws-us110.gitpod.io/#">Home</a>
                    </div>
                </nav>
            </div>
        </div>

        <div id="rlogo" class="row">
            <div class="col-12" id="clogo">
                <img src="assets/logo.jpg" alt="Logo" style="border-radius: 40%">
            </div>
        </div>

        <div id="title" class="row">
            <div class="col-1"></div>
            <div class="col-10">
                <h3>Filmes sobre Física, Matemática e Astronomia</h3>
            </div>
            <div class="col-1"></div>
        </div>      

        <div id="cards" class="row">
            <div class="col-12" id="ccards">
                <div id="carouselExample" class="carousel slide">
                    <div class="carousel-inner">
                        <div class="carousel-item active" id="btn1">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto; height: 27rem">
                                <img src="assets/apollo.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn2">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/teoria.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn3">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/einstein.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn4">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/estrelas.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn5">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/gravidade.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn6">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/interestelar.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn7">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/imitacao.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn8">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/homem.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn9">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/marte.jpg" class="card-img-top">
                            </div>
                        </div>

                        <div class="carousel-item" id="btn10">
                            <div class="card text-bg-dark mb-3" style="width: 18rem; margin: auto;height: 27rem">
                                <img src="assets/mente.jpg" class="card-img-top">
                            </div>
                        </div>
                    </div>
                    <button class="carousel-control-prev" type="button" data-bs-target="#carouselExample" data-bs-slide="prev">
                        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                        <span class="visually-hidden">Previous</span>
                    </button>
                    <button class="carousel-control-next" type="button" data-bs-target="#carouselExample" data-bs-slide="next">
                        <span class="carousel-control-next-icon" aria-hidden="true"></span>
                        <span class="visually-hidden">Next</span>
                    </button>
                </div>
            </div>
        </div>

        <div class="row">
            <div class="col-12" id="rod">

            </div>
        </div>

    `;



    const btn1 = document.getElementById('btn1');
    btn1.addEventListener('click', exibirConteudo.bind(null, 1));

    const btn2 = document.getElementById('btn2');
    btn2.addEventListener('click', exibirConteudo.bind(null, 2));

    const btn3 = document.getElementById('btn3');
    btn3.addEventListener('click', exibirConteudo.bind(null, 3));

    const btn4 = document.getElementById('btn4');
    btn4.addEventListener('click', exibirConteudo.bind(null, 4));

    const btn5 = document.getElementById('btn5');
    btn5.addEventListener('click', exibirConteudo.bind(null, 5));

    const btn6 = document.getElementById('btn6')
    btn6.addEventListener('click', exibirConteudo.bind(null, 6))

    const btn7 = document.getElementById('btn7');
    btn7.addEventListener('click', exibirConteudo.bind(null, 7));

    const btn8 = document.getElementById('btn8');
    btn8.addEventListener('click', exibirConteudo.bind(null, 8));

    const btn9 = document.getElementById('btn9');
    btn9.addEventListener('click', exibirConteudo.bind(null, 9));

    const btn10 = document.getElementById('btn10');
    btn10.addEventListener('click', exibirConteudo.bind(null, 10));
}
