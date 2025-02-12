#include <stdio.h>

/*
005. Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

int main(int argc, char const *argv[]) {

  float diaria_encanador = 45, imposto_renda = 0.08, valor_total, valor_descontado_imposto;
  int dias_trabalhados;

  printf("O encanador trabalhou quantos dias? ");
  scanf("%d", &dias_trabalhados);

  valor_total = (dias_trabalhados * diaria_encanador);
  valor_descontado_imposto = valor_total - (valor_total * imposto_renda);

  printf("O encanador vai receber R$%.2f", valor_descontado_imposto);
  printf(" \n");
  return 0;
}
