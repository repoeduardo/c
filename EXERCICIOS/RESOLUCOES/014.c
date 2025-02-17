#include <stdio.h>

/*
014. Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/


int main(int argc, char const *argv[]) {

  char caracter;
  printf("Caractere > ");
  scanf("%c", &caracter);

  if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
    printf("Eh vogal");
  } else {
    printf("Nao vogal");
  }

  printf(" \n");
  return 0;
}
