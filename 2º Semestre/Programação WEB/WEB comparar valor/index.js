function compare(){
    let a = parseInt(document.getElementById("numero1").value);
    let b = parseInt(document.getElementById("numero2").value);

    if (a>b){
        alert("O numero " + a + " é maior!");
    }

    else if (b>a){
        alert("O numero " + b + " é maior!!");
    }

    else{
        alert("Os números são iguais!!");
    }
}