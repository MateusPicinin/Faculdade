#include <stdio.h>


int main(){

char Na1;
char Na2;
char Na3;

char Nb1;
char Nb2;
char Nb3;

int N1 = 0;
int N2 = 0;

float Q;

    printf("Digite o primeiro algarismo de N1: ");
    scanf(" %c", &Na1);

    printf("Digite o segundo algarismo de N1: ");
    scanf(" %c", &Na2);

    printf("Digite o terceiro algarismo de N1: ");
    scanf(" %c", &Na3);

    printf("Digite o primeiro algarismo de N2: ");
    scanf(" %c", &Nb1);

    printf("Digite o segundo algarismo de N2: ");
    scanf(" %c", &Nb2);

    printf("Digite o terceiro algarismo de N2: ");
    scanf(" %c", &Nb3);

    N1 = (Na1 - '0') * 100 + (Na2 - '0') * 10 + (Na3 - '0');
    N2 = (Nb1 - '0') * 100 + (Nb2 - '0') * 10 + (Nb3 - '0');

    Q = (float) N1/N2;

    printf("O resultado da divisão dos dois valores foi: %8.3f", Q);

    return 0;

}



