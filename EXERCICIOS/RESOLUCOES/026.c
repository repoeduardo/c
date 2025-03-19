#include <stdio.h>

/*
026. Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main(){

    int a = 0, n, index;
    
    printf("> ");
    scanf("%d", &n);

    for(index = 1; index <= n; index++){
        a += index;
    }

    printf("A: %d", a);
    printf("\n");
    return 0;
}