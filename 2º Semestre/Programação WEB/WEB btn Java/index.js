
function soma(){
    let a = parseInt(document.getElementById("numero1").value);
    let b = parseInt(document.getElementById("numero2").value);
    let c = parseInt(a+b)
    let d = parseInt(a-b)
    let e = parseInt(a*b)
    let f = parseInt(a/b)
    alert("O resultado da soma é: " + c)
    alert("O resultado da subtração é: " + d)
    alert("O resultado da multiplicação é: " + e)
    alert("O resultado da divisão é: " + f)
    document.getElementById("saida").innerHTML = "O resultado da soma é: " + c;
    document.getElementById("saida1").innerHTML = "O resultado da subtração é: " + d;
    document.getElementById("saida2").innerHTML = "O resultado da multiplicação é: " + e;
    document.getElementById("saida3").innerHTML = "O resultado da divisão é: " + f;
}

