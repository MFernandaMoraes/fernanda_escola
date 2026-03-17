function converter_temp(){

    let celsius;
    // let resultado;
    const fator_mult = 1.8;

    celsius = document.getElementById("celsius").value;

    resultado = celsius * fator_mult + 32;
    // resultado = (9 * celsius + 160) / 5;

    document.getElementById("resultado").innerHTML = resultado + "° Fahrenheit";

}