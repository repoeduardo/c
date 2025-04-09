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

### FGETS

A função `fgets()` foi criada para ler arquivos. Contudo, é bastante versátil e nos permite ler a entrada do buffer padrão do teclado (nesse caso o `stdin`). O modo de usar:

~~~c
char country[51];
fgets(country, 51, stdin); // parâmetros: variavel,tamanho,stdin
~~~


## IDENTIFICAR O TAMANHO DE UM STRING

O objetivo é identificar a quantidade de caracteres que um String possui. Quando é definido um vetor de caracteres como esse: `char name[25];` o último caractere sempre será `\0` isso é muito importante e vai nos ajudar a calcular o tamanho da String de forma manual.


### MANEIRA MANUAL

~~~c
#include <stdio.h>

int main() {

  char name[10] = "Eduardo"; // 7 char
  int index, size = 0;

  for(index = 0; name[index] != '\0'; index++){
    printf("%c ", name[index]);
    size++;
  }
  
  printf("\nsize: %d", size);
  printf("\n");
  return 0;
}
~~~

Saída:
~~~sh
E d u a r d o 
size: 7
~~~

O tamanho máximo suportado por `name` é 10, contudo, o conteúdo `Eduardo` tem 7 caracteres. Logo, criamos uma variável que conta a cada loop dentro da estrutura de repetição até que é encontrado o valor `\0` que obviamente sinaliza o final da cadeia de caracteres.


### STRLEN()

A função `strlen()` está inclusa na biblioteca `<string.h>` sendo necessário inclui-lá no seu programa. A função calcula o tamanho da string apontada, excluindo o caractere null byte `\0` 

~~~c
#include <stdio.h>
#include <string.h> // work with Strings
~~~

Exemplo usando a função `strlen()`:

~~~c
#include <stdio.h>
#include <string.h> // work with Strings

int main() {

  char name[10] = "Eduardo";
  
  int size = strlen(name);

  printf("%d", size);
  printf("\n");
  return 0;
}
~~~

Saída:
~~~sh
7
~~~

## STRCAT() - COMO CONCATENAR DUAS STRINGS

~~~c
#include <stdio.h>
#include <string.h> // work with Strings

int main() {

  char words[50] = "Hi";
  
  strcat(words, ", how r u?");
  
  printf("%s", words);
  printf("\n");
  return 0;
}
~~~

Saída:
~~~sh
Hi, how r u?
~~~

Outro exemplo usando outra String seria:

~~~c
char words[50] = "Hi";
char words2[50] = ", how r u?";
strcat(words, words2);  
printf("%s", words);
~~~

Sempre o primeiro parâmetro recebera o valor concatenado, o segundo parâmetro continua com seu conteúdo original.

Saída de `words`: `Hi, how r u?` <br>
Saída de `words2`: `, how r u?` <br>