#include <stdio.h>
#include <stdlib.h>

/*
001. Escreva um programa que leia a idade, sexo (m ou f), altura (m) e peso (kg) de uma pessoa.
Em seguida exiba na tela as informações.
*/

int main()
{
   float altura, peso;
   int idade;
   char sexo;

   printf("Digite sua idade: ");
   scanf("%d", &idade);
   printf("Digite seu sexo (m ou f - em minusculo): ");
   scanf(" %c", &sexo);
   printf("Digite sua altura (em metros): ");
   scanf("%f", &altura);
   printf("Digite seu peso (em KG): ");
   scanf("%f", &peso);

   printf("\nIDADE: %d \nSEXO: %c \nALTURA: %.2f \nPESO: %.2f", idade, sexo, altura, peso);
   return 0;
}