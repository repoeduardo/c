#include <stdio.h>

/*
002. Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main(int argc, char const *argv[]) {

  int a, b, auxiliar;

  printf("Digite um valor para a variavel A: ");
  scanf("%d", &a);
  printf("Digite um valor para a variavel B: ");
  scanf("%d", &b);

  printf("\nValores iniciais -> A vale %d; B vale %d \n", a, b);

  /*
  Linha de pensamento
    1. guardar o valor de A em uma váriavel auxiliar
    2. atribuir o valor de B para váriavel A
    3. atribuir o valor de que inicialmente estava em A, mas agora está em Auxiliar para a váriavel B
  */

  auxiliar = a;
  a = b;
  b = auxiliar;

  printf("Valores trocados -> A vale %d; B vale %d \n", a, b);

  printf(" \n");
  return 0;
}