#include <stdio.h>

/*
018. Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a 
tabuada. 
Exemplo: Entrada 7
Saída:
  7 * 1 = 7
  7 * 2 = 14
  7 * 3 = 21
  7 * 4 = 28
  7 * 5 = 35
  7 * 6 = 42
  7 * 7 = 49
  7 * 8 = 56
  7 * 9 = 63
  7 * 10 = 70
*/

int main(int argc, char const *argv[]) {
  
  int index, numero;

  printf("Numero > ");
  scanf("%d", &numero);

  for (index = 0; index <= 10; index++){
    printf("%d X %d = %d\n", numero, index, numero * index);
  }

  printf(" \n");
  return 0;
}
