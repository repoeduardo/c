#include <stdio.h>

/*
009. Escreva um programa em C que lê 5 números inteiros, um por vez.
Conte quantos destes valores são negativos e quantos são positivos.
Ao final, imprima na tela a quantidade de números negativos e positivos.
*/

int main(int argc, char const *argv[]) {

  int numero1, numero2, numero3, numero4, numero5, negativos = 0, positivos = 0;

  printf("valor 1 > ");
  scanf("%d", &numero1);
  if(numero1 != 0){
    if(numero1 > 0){
      positivos++;
    }else{
      negativos++;
    }
  }

  printf("valor 2 > ");
  scanf("%d", &numero2);
  if(numero2 != 0){
    if(numero2 > 0){
      positivos++;
    }else{
      negativos++;
    }
  }

  printf("valor 3 > ");
  scanf("%d", &numero3);
  if(numero3 != 0){
    if(numero3 > 0){
      positivos++;
    }else{
      negativos++;
    }
  }

  printf("valor 4 > ");
  scanf("%d", &numero4);
  if(numero4 != 0){
    if(numero4 > 0){
      positivos++;
    }else{
      negativos++;
    }
  }

  printf("valor 5 > ");
  scanf("%d", &numero5);
  if(numero5 != 0){
    if(numero5 > 0){
      positivos++;
    }else{
      negativos++;
    }
  }

  printf("Quantidade de negativos: %d\nQuantidade de positivos: %d", negativos, positivos);

  printf(" \n");
  return 0;
}
