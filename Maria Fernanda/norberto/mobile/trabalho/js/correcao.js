function calcular(){

    let pri_nota, seg_nota, ter_nota, quar_nota;
    
    pri_nota = Number(document.getElementById("pri_nota").value);
    seg_nota = Number(document.getElementById("seg_nota").value);
    ter_nota = Number(document.getElementById("ter_nota").value);
    quar_nota = Number(document.getElementById("quar_nota").value);

    media = (pri_nota + seg_nota + ter_nota + quar_nota) / 4;

    console.log(pri_nota);
    console.log(seg_nota);
    console.log(ter_nota);
    console.log(quar_nota);
    console.log(media);
}