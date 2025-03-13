#include <stdio.h>

/*
023. Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

int main(){
    
    int index;
    for(index = 1; index <= 9999; index++){
        if (index % 7 == 0){
            printf("%d ", index);
        }
    }

    printf("\n");
    return 0;
}