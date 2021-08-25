/*
Escreva um programa em linguagem C que leia dez números inteiros 
e, após finalizar a leitura, imprima todos os números lidos na ordem 
inversa em que eles foram digitados.
*/
#include <stdio.h>
int main(){
    int numeros[10];
    for(int indice=0; indice<10;indice++){
        printf("Digite um número: ");
        scanf("%d", &numeros[indice]);
    }
     for(int indice=9; indice>=0;indice--){
        printf("%d ", numeros[indice]);
    }
    return 0;
}