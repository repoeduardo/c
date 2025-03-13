#include <stdio.h>

/*
024. Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, 
inclusive N, se for o caso.
*/

int main(){
    
    int n, index;

    printf("Numero N > ");
    scanf("%d", &n);
    
    for(index = 1; index <= n; index++){
        if (index % 2 == 0){
            printf("index: %d -> quadrado de index: %d \n", index, index * index);
        }
    }

    printf("\n");
    return 0;
}
