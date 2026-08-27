const tabela = document.getElementById("tabela")

let dados = [
    {Id_aplicativo: 68, Nome: "Instagram", Descricao: "App de fotos e videos"},
    {Id_aplicativo: 69, Nome: "YouTube", Descricao: "Plataforma de videos online"},
    {Id_aplicativo: 70, Nome: "WhatsApp", Descricao: "App de mensagens instantaneas"},
    {Id_aplicativo: 71, Nome: "Spotify", Descricao: "App de musica e podcasts"},
]

let lerDados = dados.map(n => `
    <tr>
        <td>${n.Id_aplicativo}</td>
        <td>${n.Nome}</td>
        <td>${n.Descricao}</td>
    </tr>

`).join("")

tabela.innerHTML += lerDados


