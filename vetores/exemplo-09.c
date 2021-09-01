/*
Escreva um programa em linguagem C que leia um vetor
 de dez números inteiros e, após terminar a leitura, leia um número inteiro N e 
imprima todos os elementos do vetor que são maiores que N
*/
#include <stdio.h>
#define TAMANHO 10
int main(){
    int numeros[TAMANHO];
    int numero;
    // preencher os valores do vetor
    for(int indice=0; indice < TAMANHO; indice++){
        printf("Digite um número: ");
        scanf("%d", &numeros[indice]);
    }
    printf("Digite outro número: ");
    scanf("%d", &numero); //10
    for(int indice=0; indice < TAMANHO; indice++){
        int elemento = numeros[indice];
        if(elemento > numero){
            printf("%d \n", elemento);
        }
    }
    return 0;
}