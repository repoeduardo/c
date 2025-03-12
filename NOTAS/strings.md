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


## FUNCIONAMENTO




