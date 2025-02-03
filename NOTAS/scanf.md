# FUNÇÃO SCANF

A função `scanf` é utilizado para entrada de dados. Faz parte da biblioteca padrão de C, especificamente da `<stdio.h>` (Standard Input/Output). O nome `scanf` é uma abreviação de *scan formatted*, indicando sua função de ler e interpretar dados a partir da entrada padrão (geralmente o teclado).

## COMO USAR

Para usar a função lembre-se de importar a biblioteca `<stdio.h>`. A sintaxe básica da função é:

`scanf("formato", &variavel1, &variavel2,...);`

**FORMATO**: Uma string que contém especificadores de formatos de cada tipo de dado que será lido.

**VARIAVEL**: Endereços das variáveis onde os dados lidos serão armazenados. O uso do operador `&` é obrigatório nessa ocasião para passar o endereço das variáveis.


| Especificador | Tipo de dado | Exemplo |
|--------------|------------|---------|
| `%d` ou `%i` | Inteiro (int) | `scanf("%d", &x);` |
| `%f` | Float | `scanf("%f", &altura);` |
| `%lf` | Double | `scanf("%lf", &peso);` |
| `%c` | Caractere (char) | `scanf(" %c", &letra);` (⚠️ espaço antes do `%c` evita problemas) |
| `%s` | String (char[]) | `scanf("%s", nome);` |
| `%x` | Hexadecimal | `scanf("%x", &num);` |
| `%p` | Ponteiro | `scanf("%p", &ptr);` |

~~~c
#include <stdio.h>

int main() {
    int idade;
    float altura;
    char inicial;
    char nome[100]; 

    // Leitura de um inteiro
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Leitura de um número de ponto flutuante (Número Real)
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    // Leitura de um único caractere
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial); // Espaço antes do %c para consumir espaços em branco

    // Leitura de uma string (até o primeiro espaço em branco)
    printf("Digite seu nome: ");
    scanf("%99s", nome); // 99 para deixar espaço para o terminador '\0'

    printf("Você tem %d anos, %.2f metros de altura, e seu nome começa com %c. Seu nome é %s.\n", idade, altura, inicial, nome);

    return 0;
}
~~~


## PROBLEMAS COMUNS e COMO SOLUCIONAR

**MULTIPLOS VALORES**

Lendo multiplos valores
~~~c
#include <stdio.h>

int main() {
    int idade;
    float altura;
    
    printf("Digite sua idade e altura: ");
    scanf("%d %f", &idade, &altura);
    
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    
    return 0;
}
~~~

**LENDO STRINGS**

Quando for ler um array de caracteres não precisa usar o operador `&` na função. A justificativa é porque strings já são ponteiros
~~~c
#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome); // nesse caso não precisa do operador &

    printf("Olá, %s!\n", nome);
    return 0;
}
~~~
⚠️ Problema: `scanf("%s", nome);` só lê até o primeiro espaço. Para ler frases inteiras, use `fgets()` ou `scanf(" %[^\n]", nome);`.


**LENDO STRINGS COM ESPAÇO**

~~~c
#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome); // Lê até o ENTER

    printf("Seu nome: %s\n", nome);
    return 0;
}
~~~
📌 Explicação do `scanf(" %[^\n]", nome);`

- O espaço antes do `%[` ignora caracteres em branco.
- `[^...]` diz para aceitar qualquer caractere exceto \n (ENTER).