/*
Escreva um programa em linguagem C que leia um vetor de cinco posições, 
copie esses valores para um segundo vetor e, em seguida, imprima o segundo vetor
*/
#include <stdio.h>
#define TAMANHO 5
int main(){
    int primeiro[TAMANHO]; // 18, 17, 32, 25, 28
    int segundo[TAMANHO]; // 28, 25, 32, 17, 18
    // preenchendo o primeiro vetor
    for(int indice =0; indice < TAMANHO; indice++){
        printf("Digite um número: ");
        scanf("%d", &primeiro[indice]);
    }
    //copiar os valores do primeiro vetor para o segundo
    for(int indice =0; indice < TAMANHO; indice++){
        segundo[indice] = primeiro[TAMANHO-indice-1];
    }
    //imprimir os valores do segundo vetor
    for(int indice =0; indice < TAMANHO; indice++){
        printf("%d -> %d \n", indice, segundo[indice]);
    }

    return 0;
}