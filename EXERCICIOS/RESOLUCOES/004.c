#include <stdio.h>

/*
004 Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

int main(int argc, char const *argv[]) {

  float despesa, gorjeta, gasto_por_pessoa;
  int n_pessoas;

  printf("Digite o valor da despesa: ");
  scanf("%f", &despesa);
  printf("Quanto o restaurante cobra de gorjeta (em porcentagem): ");
  scanf("%f", &gorjeta);
  printf("Quantas pessoas comeram no restaurante: ");
  scanf("%d", &n_pessoas);

  gasto_por_pessoa = (despesa + (despesa * gorjeta/100)) / n_pessoas;

  printf("\nCada pessoa deve pagar R$%.2f\n", gasto_por_pessoa);
  printf(" \n");
  return 0;
}