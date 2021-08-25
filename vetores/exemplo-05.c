/*
Escreva um programa em linguagem C que preencha um vetor com cinco posições 
e, em seguida, exiba apenas os números pares existentes no vetor
*/
#include <stdio.h>
int main(){
    int numeros[5] = {12, 13, 15, 18, 19};
    for(int indice=0; indice<5;indice++){
        int valor = numeros[indice];
        if(valor % 2 ==0){ // número é par
            printf("%d\n", valor);
        }
    }

    return 0;
}