#include <stdio.h>

/*
019. Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura 
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for 
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser 
encerrado. Considere que a senha correta é o valor 123456.
*/

int main(int argc, char const *argv[]) {
  
  int senha_usuario = 0, senha_correta = 123456;

  while (senha_correta != senha_usuario){
    printf("\nInforme a senha numerica > ");
    scanf("%d", &senha_usuario);

    if (senha_correta == senha_usuario){
      printf("Acesso Permitido");
    } else {
      printf("Senha Invalida");
    }

  }

  printf(" \n");
  return 0;
}