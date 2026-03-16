function letra(){

    let letra;

    letra = document.getElementById("letra").value;

    console.log(letra);

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        document.getElementById("resultado").innerHTML = "vogal";
    } else {
        document.getElementById("resultado").innerHTML = "consoante";
    }

}