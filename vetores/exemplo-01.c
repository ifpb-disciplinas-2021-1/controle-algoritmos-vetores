#include <stdio.h>
int main(){
    // int idades = | 12 | 22 | 18 | 9 | 45 | 
    int idades[5]; //declarando o vetor
    for(int i=0; i<5; i++){
     printf("Digite a idade: ");
     scanf("%d", &idades[i]); //atribuindo valores às posições do vetor
    }
    return 0;
}
/*
Digite a idade: 12 idades[0] = 12
Digite a idade: 22 idades[1] = 22
Digite a idade: 18
Digite a idade: 9
Digite a idade: 45 idades[4] = 45
*/