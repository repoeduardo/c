# STRINGS

Em C, uma string não é um tipo de dado nativo como em outras linguagens (ex.: Python ou Java). Em vez disso, uma string é representada como um [vetor](arrays.md) de caracteres `char[]` terminado por um caractere nulo `\0`. O `\0` é essencial porque marca o fim da string, permitindo que funções da biblioteca padrão saibam onde ela termina.


**CARACTERISTICAS**

- Uma string é um array de tipo char.

- O caractere nulo (`\0`, valor ASCII 0) é o terminador.

- Strings são manipuladas usando ponteiros ou arrays.


## DECLARAÇÃO e INICIALIZAÇÃO

*DECLARAÇÃO COMO UM ARRAY:*
~~~c
char str[10] = "Hello"; // Array de 10 caracteres, inicializado com "Hello"
char mywords[] = "Hello, my name is Eduardo";
~~~

Aqui, `str` contém: 'H', 'e', 'l', 'l', 'o', '\0' e **os 4 últimos elementos são preenchidos com 0 (nulo).**

*DECLARAÇÃO COMO POINTEIRO:*
~~~c
char *str = "Hello"; // Ponteiro para uma string literal
~~~

Neste caso, `str` aponta para uma string constante armazenada na memória somente leitura.

*SEM INICIALIZAÇÃO:*

~~~c
char str[10];
str[0] = 'H';
str[1] = 'i';
str[2] = '\0'; // Necessário para marcar o fim
~~~


## COMO LER UMA STRING

### SCANF

Por padrão, a função `scanf()` lê até o primeiro espaço vazio. Portanto a saída para o seguinte programa:

~~~c
#include <stdio.h>

int main(){

    char username[50] = "";

    printf("type your name > ");
    scanf("%s", username);

    printf("%s\n", username);
    return 0;
}
~~~

será essa:

```sh
Eduardo
```

Para resolver um dos problemas escreva a função dessa forma

~~~c
char var[10] = "";
scanf(" %[^\n]", var);
~~~

Onde:
`%[^\n]` permite que o `scanf()` leia até o usuário digitar Enter. Isso resolve o problema de parar de ler até encontrar um espaço vazio, porém ainda há o problema do tamanho da string.

Para resolver esse outro problema adicione um número após o `%` dessa forma:

~~~c
char fruit[20] = "apple";
scanf(" %19[^\n]", fruit);
~~~

Onde:
`%19[^\n]` permite que o `scanf()` leia até o usuário digitar Enter e consiga ler no máximo até 19 caracteres, sendo que sobrará um espaço para o carectere null (por isso mesmo que tenha sido declarado 20 é especifícado 19)
