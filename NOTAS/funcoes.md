# FUNÇÕES e PROCEDIMENTOS

Em C, funções (às vezes chamadas de "procedimentos" quando não retornam valor) são blocos de código reutilizáveis que realizam uma tarefa específica

Estrutura

~~~c
tipo_de_retorno nome_da_funcao(parâmetros) {
    // corpo da função
}
~~~

Exemplo

~~~c
#include <stdio.h>

void diga_ola() {
    printf("Olá, mundo!\n");
}

int main() {
    diga_ola();  // chama a função
    return 0;
}
~~~

Outro exemplo com uma função que calcula idade:

~~~c
#include <stdio.h>

int age(int current_year, int birthyear){
    return current_year - birthyear;
}

int main(){

    int myage = age(2025,2001);
    printf("%d", myage);

    printf("\n");
    return 0;
}
~~~

Uma função próprio que conta quantos caracteres possui em uma String:

~~~c
#include <stdio.h>

int stringsize(char str[]){
    int length = 0;

    while(str[length] != '\0'){
        length++;
    }

    return length;
}

int main(){

    char name[20] = "Eduardo";
    int length = stringsize(name);
    printf("%d", length);

    printf("\n");
    return 0;
}
~~~