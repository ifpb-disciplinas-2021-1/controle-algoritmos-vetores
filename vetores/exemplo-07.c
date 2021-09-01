/*
Escreva um programa em linguagem C que solicite ao usuário para 
preencher um vetor com cinco posições e, em seguida, 
exiba o maior e o menor número digitado
*/
#include <stdio.h>
// #define TAMANHO 5
int main(){
    const int TAMANHO = 5;
    int numeros[TAMANHO]; // 18, 17, 32, 25, 28
    int maior, menor;
    //preencher os elementos do vetor
    for(int indice =0; indice < TAMANHO; indice++){
        printf("Digite um número: ");
        scanf("%d", &numeros[indice]); //indice -> 0, 1, 2, 3, 4
    }
    menor = maior = numeros[0];
    // int maior=numeros[0];
    // int menor=numeros[0];
    // percorrer o vetor e localizar o elemento de maior valor
    for(int indice =0; indice < TAMANHO; indice++){
        int elemento = numeros[indice];
        if(elemento > maior){
            maior = elemento; //maior = 18; maior=32
        }
        if(elemento < menor){
            menor = elemento;
        }
    }
    printf("O maior valor: %d, menor valor: %d\n", maior, menor);

    return 0;
}
