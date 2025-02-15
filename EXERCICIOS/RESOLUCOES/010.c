#include <stdio.h>

/*
010. Escreva um programa em C que leia um número e informe se ele é divisível
por 2, por 3 ou por 5, ou se não é divisível por nenhum deles.
*/

int main(int argc, char const *argv[]) {

  int numero;

  printf("Numero > ");
  scanf("%d", &numero);

  if (numero % 2 == 0){
    printf("Numero %d eh divisivel por 2", numero);
  } else if(numero % 3 == 0){
    printf("Numero %d eh divisivel por 3", numero);
  } else if(numero % 5 == 0){
    printf("Numero %d eh divisivel por 5", numero);
  } else {
    printf("Numero nao eh divisivel por 2, 3 nem 5.");
  }

  printf(" \n");
  return 0;
}