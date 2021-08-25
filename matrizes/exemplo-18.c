/*
Escreva um programa em linguagem C que armazena uma matriz (2x4) 
e, em seguida, leia um número, calcule o produto do número pela matriz 
e armazene em uma segunda matriz. Por fim, a segunda matriz deve ser impressa
*/
#include <stdio.h>
#define LINHAS 2
#define COLUNAS 4
int main(){
    int numero;
    int matriz[LINHAS][COLUNAS]={
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int resultante[LINHAS][COLUNAS];

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            resultante[i][j] = numero * matriz [i][j];
        }
    }
    for(int i=0;i<LINHAS; i++){
        for(int j=0;j<COLUNAS;j++){
           printf("%d ", resultante[i][j]);     
        }
        printf("\n");
    }
    return 0;
}