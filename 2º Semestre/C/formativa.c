#include <stdio.h>


int main()
{
    int minutos, tempo, diretores, intervalo;

    printf("Digite o numero de diretores que vao falar!\n");
    scanf("%d", &diretores);

    printf("\n Digite o tempo de apresentacao: ");
    scanf("%d", &minutos);

    intervalo = diretores - 1;
    tempo = (minutos-intervalo)/diretores;

    printf("\nQuantidade de intervalos: %d", intervalo);
    printf("\nTempo de fala de cada diretor: %d minutos\n", tempo);

    return 0;
}

