#include <stdio.h>
#define LINHAS 2
#define COLUNAS 10
int main(){
    int matriz[][COLUNAS] ={
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6, 7, 8, 9}
    };
    // atribuição
    matriz[0][6] = 11;

    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}