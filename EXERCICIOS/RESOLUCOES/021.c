#include <stdio.h>

/*
021. Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:

→ O bloco de repetição deve executar no máximo 500 vezes.
*/

int main(int argc, char const *argv[]) {
  
  int index, valor = 0;
  for(index = 1; index <= 1000; index+=2){
    valor += index;
  }

  printf("Somatoria impares: %d", valor);

  printf(" \n");
  return 0;
}