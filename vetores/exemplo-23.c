/*
12, 13, 14, 15, 16
10, 14, 4, 7, 11
22, 18, 22

*/
# include <stdio.h>
#define TAMANHO 5
int main(){
    int primeiro[TAMANHO]= {12, 13, 14, 15, 16};
    int segundo[TAMANHO] = {10, 14, 4, 7, 11};
    int terceiro[TAMANHO];

    for(int indice=0; indice < TAMANHO; indice++){
        int soma = primeiro[indice] + segundo[indice];
        if(soma % 2 ==0){
            terceiro[indice]=soma ;
        }else{
            terceiro[indice]= -1; //soma foi ímpar
        }
        
    }

    for(int indice=0; indice < TAMANHO; indice++){
        printf("%d ", terceiro[indice]);
    }

    return 0;
}