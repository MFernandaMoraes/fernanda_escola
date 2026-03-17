function calcula_velocidadeMedia(){

    console.log("Apertei o botão");

    let distancia;
    let tempo;
    let resultado;

    distancia = document.getElementById("distancia").value;
    tempo = document.getElementById("tempo").value;

    resultado = distancia / tempo;

    document.getElementById("resultado").innerHTML = resultado + " Km/h";


}