# ESTRUTURAS DE REPETIÇÃO

As estruturas de repetição na linguagem C permitem executar um bloco de código várias vezes, com base em uma condição ou um número específico de iterações. As principais estruturas são `for`, `while` e `do while`

**for ->** para repetições controladas. <br>
**while ->** para laços que dependem de uma condição. <br>
**do while ->** *executa pelo menos uma vez* antes de verificar a condição. <br>


## ESTRUTURA FOR( )
Usado quando sabemos o número de repetições de antemão.

Sintaxe: 
~~~c
for (inicialização; condição; incremento) {
    // Código a ser repetido
}
~~~

Exemplo:
~~~c
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Repetição %d\n", i);
    }
    return 0;
}
~~~

## ESTRUTURA WHILE( )
Usado quando não sabemos exatamente quantas repetições serão necessárias. Continua enquanto a condição for verdadeira.

Sintaxe: 
~~~c
while (condição) {
    // Código a ser repetido
}
~~~

Exemplo:
~~~c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("Repetição %d\n", i);
        i++;  // Incrementa a variável
    }
    return 0;
}
~~~

## ESTRUTURA DO-WHILE( )
Executa pelo menos uma vez antes de verificar a condição. 

💡 Uso típico: Quando precisamos garantir que o código seja executado pelo menos uma vez antes da verificação.

Sintaxe: 
~~~c
do {
    // Código a ser repetido
} while (condição);
~~~

Exemplo:
~~~c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("Repetição %d\n", i);
        i++;
    } while (i <= 5);
    
    return 0;
}
~~~

## CONTROLE DE FLUXO

Podemos interromper ou pular iterações com os comandos `break` ou `continue`

``break`` → Sai do loop imediatamente. <br>
``continue`` → Pula a iteração atual e vai para a próxima.


### COMANDO BREAK

Exemplo com o comando `break`
~~~c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Sai do loop quando i for 5
        }
        printf("Número: %d\n", i);
    }
    return 0;
}
~~~

💡 O loop para quando i == 5.

Saida esperada
~~~txt
Número: 1
Número: 2
Número: 3
Número: 4
~~~


### COMANDO CONTINUE

Exemplo com o comando `continue`

~~~c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Pula a iteração quando i for 3
        }
        printf("Número: %d\n", i);
    }
    return 0;
}
~~~

💡 O número 3 foi pulado.

Saida esperada:
~~~txt
Número: 1
Número: 2
Número: 4
Número: 5
~~~