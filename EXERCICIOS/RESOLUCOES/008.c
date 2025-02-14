#include <stdio.h>

/*
008. Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main(int argc, char const *argv[]) {

  int valor1, valor2, valor3, maior, menor;

  printf("valor 1 > ");
  scanf("%d", &valor1);
  printf("valor 2 > ");
  scanf("%d", &valor2);
  printf("valor 3 > ");
  scanf("%d", &valor3);

  maior = valor1;
  menor = valor1;

  if(valor2 > maior){
    maior = valor2;
  }else if(valor2 < menor){
    menor = valor2;
  }

  if(valor3 > maior){
    maior = valor3;
  }else if(valor3 < menor){
    menor = valor3;
  }

  printf("Maior valor: %d \nMenor valor: %d", maior, menor);

  printf(" \n");
  return 0;
}
