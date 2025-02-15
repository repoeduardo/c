#include <stdio.h>

/*
011. Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main(int argc, char const *argv[]) {

  float taxa = 5.30, dolar, real;
  int opcao;

  printf("** CONVERSAO CAMBIAL **\n1. R$ -> $ (Real para dolar)\n2. $ -> R$ (Dolar para real)\n> ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
        printf("Digite o valor em Real(R$) > ");
        scanf("%f", &real);
        dolar = real / taxa;
        printf("\nR$%.2f vale $%.2f", real, dolar);
        break;
    case 2:
        printf("Digite o valor em Dolares($) > ");
        scanf("%f", &dolar);
        real = dolar * taxa;
        printf("\n$%.2f vale R$%.2f", dolar, real);
        break;
    default:
        printf("\nsaindo...");
  }

  printf(" \n");
  return 0;
}
