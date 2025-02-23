#include <stdio.h>

/*
020. Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

int main(int argc, char const *argv[]) {
  
  int valor_total = 0, index;

  for (index = 1; index <= 1000; index++){
    if(index % 2 != 0){
      valor_total += index;
    }
  }

  printf("%d",valor_total);

  printf(" \n");
  return 0;
}