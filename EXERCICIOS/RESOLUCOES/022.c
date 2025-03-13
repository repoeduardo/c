#include <stdio.h>

/*
022. Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e 
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

int main(){
    float nota1 = 0, nota2 = 0, media_semestral = 0;

    while(1 == 1){
        printf("Primeira nota > ");
        scanf("%f", &nota1);

        if (nota1 >= 0 && nota1 <= 10){
            break;
        }
    }

    printf("\n");
    
    while(1 == 1){
        printf("Segunda nota > ");
        scanf("%f", &nota2);

        if (nota2 >= 0 && nota2 <= 10){
            break;
        }
    }

    media_semestral = (nota1 + nota2) / 2;

    printf("\nA media semestral vale %.1f", media_semestral);
    printf("\n");
    return 0;
}