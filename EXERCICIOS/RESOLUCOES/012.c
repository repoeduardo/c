#include <stdio.h>

/*
012. O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

IMC Interpretação
Menor que 18,5 Abaixo do peso
Entre 18,5 e menor que 25 Peso normal
Entre 25 e menor que 30 Sobrepeso
Entre 30 e menor que 35 Obesidade grau 1
Entre 35 e menor que 40 Obesidade grau 2
Maior ou igual a 40 Obesidade grau 3
*/

int main(int argc, char const *argv[]) {

  float imc, peso, altura;

  printf("Peso (KG): ");
  scanf("%f", &peso);
  printf("Altura (METROS): ");
  scanf("%f", &altura);

  imc = peso / (altura*altura);
  printf("%.2f", imc);

  if (imc < 18.5) {
        printf("\nAbaixo do peso.");
    } else if (imc >= 18.5 && imc < 25) {
        printf("\nPeso normal.");
    } else if (imc >= 25 && imc < 30) {
        printf("\nSobrepeso.");
    } else if (imc >= 30 && imc < 35) {
        printf("\nObesidade grau 1.");
    } else if (imc >= 35 && imc < 40) {
        printf("\nObesidade grau 2.");
    } else {
        printf("\nObesidade grau 3.");
    }

  printf(" \n");
  return 0;
}
