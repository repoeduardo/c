#include <stdio.h>

/*

017. Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.


A soma de dois lados quaisquer deve ser maior que o terceiro lado. Matematicamente, se os lados forem 
a, b e c, então:

a + b > c
a + c > b
b + c > a


Triângulo Isósceles: Possui pelo menos dois lados de comprimento igual.
Triângulo Escaleno: Todos os três lados têm comprimentos diferentes.
Triângulo Equilátero: Todos os três lados têm o mesmo comprimento.
*/

int main(int argc, char const *argv[]) {
  
  int a, b, c;
  
  printf("Valor de A > ");
  scanf("%d", &a);
  printf("Valor de B > ");
  scanf("%d", &b);
  printf("Valor de C > ");
  scanf("%d", &c);

  // Verificando se é um triângulo
  if((a + b > c) || (a + c > b) || (b + c > a)) {
  
  // Verificando o tipo de triângulo

  if((a == b) && (b == c)){ // Equilatero
    printf("Triangulo equilatero");
  }else if((a != b) && (b != c) && (c != a)){ // Escaleno
    printf("Triangulo escaleno");
  }else{ // Isósceles
    printf("Triangulo isosceles");
  }

  }else{
    printf("Nao eh um triangulo");
  }

  printf(" \n");
  return 0;
}
