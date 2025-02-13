#include <stdio.h>

/*
006. Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
.
*/

int main(int argc, char const *argv[]) {

  float real, dolar, taxa_cambio = 5.30;

  printf("R$ > ");
  scanf("%f", &real);

  dolar = real / taxa_cambio;

  printf("\nR$%.2f vale $%.2f", real, dolar);

  printf(" \n");
  return 0;
}