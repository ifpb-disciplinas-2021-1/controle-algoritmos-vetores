#include <stdio.h>
int main(){
    // int idades = | 12 | 22 | 18 | 9 | 45 | 
    //atribuição estática
    int idades[5] = {12, 22, 18, 9, 45}; //declarando e inicializando o vetor
    printf("%i\n", idades[3]);
    printf("Digite um número: ");
    // atribuição dinâmica
    scanf("%d", &idades[3]);
    printf("%i\n", idades[3]);
    return 0;
} 