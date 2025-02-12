#include <stdio.h>

/*
003. Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

int main(int argc, char const *argv[]) {

  int a, b;

  printf("Digite um valor para a variavel A: ");
  scanf("%d", &a);
  printf("Digite um valor para a variavel B: ");
  scanf("%d", &b);
  printf("\nValores iniciais -> A vale %d; B vale %d \n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("\nValores trocados -> A vale %d; B vale %d \n", a, b);

  printf(" \n");
  return 0;
}
