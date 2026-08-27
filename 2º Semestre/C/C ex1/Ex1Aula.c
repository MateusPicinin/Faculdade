// int main(){
//     int N1 = 0;
//     int N2 = 0;


//     printf("Digite um numero: ");
//     scanf("%d", &N1);

//     printf("\n\n\n\n\n\n\n\n\n\n\n\n");
//     printf("Digite outro numero: ");
//     scanf("%d", &N2);

//     if (N1 == N2){
//         printf("os numeros nao podem ser iguais!");
//     }

//     else if (N1 > N2){
//         printf("Os valores em ordem crescente sao: %d, %d", N2, N1);
//     }
//     else{
//         printf("Os valores em ordem crescente sao: %d, %d", N1, N2);
//     }
// }

// #include <stdio.h>

// int main(){
//     char C1, C2, C3;


//     printf("Digite uma letra: ");
//     scanf(" %c", &C1);

//     printf("\nDigite uma letra: ");
//     scanf(" %c", &C2);

//     printf("\nDigite uma letra: ");
//     scanf(" %c", &C3);

//     if (C1 == C2 == C2 || C1 == C2 || C2 == C3 || C3 == C1){
//         printf("Nao pode repedir os numeros!!");

//     }
//     else{

//         if (C1 > "A" && C1 < "Z"){
//             C1 += 32;
//         }

//         else if (C2 > "A" && C2 < "Z"){
//             C2 += 32;
//         }
        
//         else if (C3 > "A" && C3 < "Z"){
//             C3 += 32;
//         }    

//         else if (C1 >= C2 && C2 >= C3) {
//             printf("%c, %c, %c\n", C3, C2, C1);
//         } 
//         else if (C1 >= C3 && C3 >= C2) {
//             printf("%c, %c, %c\n", C2, C3, C1);
//         } 
//         else if (C2 >= C1 && C1 >= C3) {
//             printf("%c, %c, %c\n", C3, C1, C2);
//         } 
//         else if (C2 >= C3 && C3 >= C1) {
//             printf("%c, %c, %c\n", C1, C3, C2);
//         } 
//         else if (C3 >= C1 && C1 >= C2) {
//             printf("%c, %c, %c\n", C2, C1, C3);
//         } 
//         else if (C3 >= C2 && C2 >= C1) {
//             printf("%c, %c, %c\n", C1, C2, C3);
//         }

//     }



// }

#include <stdio.h>

int main(){
    int x = 82;

    int* y = &x;

    printf(" %zu", sizeof(x) );
    printf(" %zu", sizeof(*y));
    printf(" %d", *y);

}

main();
