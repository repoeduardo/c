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


## MATRIZ DE STRINGS





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


## STRCMP() - COMO COMPARAR DUAS STRINGS


A função pertence a biblioteca `string.h` e recebe dois parâmetros: as duas strings que vão ser comparadas. O retorno dessa função é um número inteiro.

~~~c
int result = strcmp(string1, string2);
~~~

  1. Se as *strings* forem iguais é retornado 0;
  2. Se a primeira *string* for menor que a segunda *string* então o resultado é negativo;
  3. Se a primeira *string* for maior que a segunda *string* então o resultado é positivo

~~~c
#include <stdio.h>
#include <string.h>

int main(){
    char word1[10] = "a";
    char word2[10] = "b";

    printf("result: %d", strcmp(word1, word2));

    printf("\n");
    return 0;
}
~~~

Saída:
~~~sh
result: -1
~~~

  tome como base o alfabeto, as primeiras letras são valores "menores" que as letras seguintes.


## STRCPY() - COMO COPIAR O VALOR DE UM STRING

Existem uma forma manual de copiar o valor de um String que seria percorrer ela através uma estrutura de repetição e nesse momento ir atribuindo os valores encontrados para outra String até encontrar o valor `\0` (que sinaliza o final dessa String)

Contudo a biblioteca `string.h` disponibiliza a função `strcpy()`. A função recebe dois parâmetros: a string de destino e a string de origem:

~~~c
strcpy(string_destino, string_origem);
~~~

Exemplo prático:

~~~c
#include <stdio.h>
#include <string.h>

int main(){
    char word1[10] = "a";
    char word2[10] = "b";

    printf("word 1: %s\nword 2: %s", word1, word2);
    printf("\n\n");
    strcpy(word2, word1);
    printf("word 1: %s\nword 2: %s", word1, word2);

    printf("\n");
    return 0;
}
~~~

Saída:

~~~sh
word 1: a
word 2: b

word 1: a
word 2: a
~~~

## STRCHR() e STRRCHR() - PROCURANDO CARACTERES EM UMA STRING


A função `strchr()` retorna um ponteiro para a primeira ocorrência. Enquanto que a função `strrchr()` retorna um ponteiro para a ultima ocorrência. 

Exemplo usando o `strchr()`:

~~~c
char *letra;
letra = strchr(vetor_de_caracteres, caractere desejado);
~~~

~~~c
#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "Eduardo Araujo Da Silva";
    char *letra; // vai armazenar um ponteiro para um caractere

    letra = strchr(name, 'a'); // primeira ocorrência

    printf("%c", *letra);
    printf("\n");
    return 0;
}
~~~

Exemplo usando o `strrchr()`:

~~~c
char *letra;
letra = strrchr(vetor_de_caracteres, caractere desejado);
~~~

~~~c
#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "Eduardo Araujo Da Silva";
    char *letra; // vai armazenar um ponteiro para um caractere

    letra = strrchr(name, 'a'); // última ocorrência

    printf("%c", *letra);
    printf("\n");
    return 0;
}
~~~

## STRSTR() - ENCONTRAR UM SUBSTRING DENTRO DE UMA STRING


A função `strstr()` está presente na biblioteca `string.h`, e ela recebe dois parâmetros: onde você busca e o conteúdo que você quer encontrar.

~~~c
#include <stdio.h>
#include <string.h>

int main(){

    char fullname[50] = "Eduardo Araujo Da Silva";
    char middlename[] = "Araujo";
    char *pointer;

    pointer = strstr(fullname, middlename);

    if(pointer){ // check if pointer is null
        printf("%c", *pointer);
    }else{
        printf("\nnull pointer\n");
    }
    
    printf("\n");
    return 0;
}
~~~

saida:

~~~sh
A
~~~

## strupr() e strlwr() - CONVERTER PARA MAIÚSCULO OU MINUSCULO

A função  strupr() converte todos os caracteres para maiúsculo enquanto a função strlwr() converte todos os caracteres para minúsculo.

~~~c
#include <stdio.h>
#include <string.h>

int main(){

    char mywords[50] = "Good morning Sunshine";

    strupr(mywords);
    printf("Uppercase: %s", mywords);
    strlwr(mywords);
    printf("Lowercase: %s", mywords);
    
    printf("\n");
    return 0;
}
~~~

ATENÇÃO: essas funções não funcionam no Linux porque não fazem parte da biblioteca padrão do C. Para usar no Linux use as funções **toupper e tolower** que são importadas da lib `ctype.h`

Essas funções convertem um caracter por vez, então você precisa percorrer o vetor de char[] e ir atribuindo a conversão para outro vetor de char[]. No final, atribua o '\0' para indicar o final do vetor de char[]

~~~c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpper(char source[], char dest[]){
    int index = 0;

    while (source[index] != '\0'){
        dest[index] = toupper(source[index]);
        index++;
    }
    dest[index] = '\0';
}

void toLower(char source[], char dest[]){
    int index = 0;

    while (source[index] != '\0'){
        dest[index] = tolower(source[index]);
        index++;
    }
    dest[index] = '\0';
}

int main(){

    char mywords[50] = "Good morning Sunshine";
    char mywords_in_upper[50];
    char mywords_in_lower[50];

    toUpper(mywords, mywords_in_upper);
    toLower(mywords, mywords_in_lower);

    printf("Normal: %s", mywords);
    printf("\nUppercase: %s", mywords_in_upper);
    printf("\nLowercase: %s", mywords_in_lower);
    
    printf("\n");
    return 0;
}
~~~


## strtok() - COMO DIVIDIR STRINGS


A idéia por trás dessa função é dividir a String em tokens, que na prática seria dividir palavras. Sintaxe: `strtok(string, padrao)` <br>

É necessária usar um ponteiro para armazenar o token retornado, em seguida use um loop para acessar os próximos tokens.

~~~c
#include <stdio.h>
#include <string.h>


int main(){

    char mywords[50] = "Good morning Sunshine";
    char *pointer;

    pointer = strtok(mywords, " ");

    while (pointer){
        printf("Token: %s", pointer);
        pointer = strtok(NULL, " "); // NULL diz pra continuar de onde ela parou, e não do inicio da String
    }
    
    printf("\n");
    return 0;
}
~~~

Detalhe importante: a função strtok() "destrói" a string que foi passada, ou seja, se quisermos imprimir a string original logo após utilizar strtok(), ela só vai imprimir o primeiro token.
