#include <stdio.h>

/*
007. Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos. <br>
Exemplo:
Entrada: 3672
Saída: 1:1:12

*/

int main(int argc, char const *argv[]) {

  int segundos, minutos, horas;
  
  printf("Quantidade de segundos > ");
  scanf("%d", &segundos);
  
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = segundos % 60;

  printf("\n%d:%d:%d", horas, minutos, segundos);

  printf(" \n");
  return 0;
}