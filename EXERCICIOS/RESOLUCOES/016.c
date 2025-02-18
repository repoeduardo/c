#include <stdio.h>

/*
016. Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4) -> 
*/

#define PESO1 3
#define PESO2 3
#define PESO3 4

int main(int argc, char const *argv[]) {

  float media_aritmetica, media_ponderada, nota1, nota2, nota3;
  char escolha;

  printf("Nota1 > ");
  scanf("%f", &nota1);
  printf("Nota2 > ");
  scanf("%f", &nota2);
  printf("Nota3 > ");
  scanf("%f", &nota3);

  media_aritmetica = (nota1 + nota2 + nota3) / 3;
  media_ponderada = ((nota1 * PESO1) + (nota2 * PESO2) + (nota3 * PESO3)) / 3;

  printf("-- ESCOLHA --\np - Media Ponderada\na - Media Aritmetica\n> ");
  scanf(" %c", &escolha);

  if(escolha == 'p'){
    printf("A media ponderada de suas notas vale: %.2f", media_ponderada);
  }else if(escolha == 'a'){
    printf("A media aritmetica de suas notas vale: %.2f", media_aritmetica);
  }else{
    printf("Ops! Opcao invalida");
  }

  printf(" \n");
  return 0;
}