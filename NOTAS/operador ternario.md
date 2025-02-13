# OPERADOR TERNÁRIO

O operador ternário (? :) é uma forma reduzida de escrever uma estrutura ``if else`` em uma única linha. Ele é útil para expressões simples e diretas.

| Operador | Uso |
|----------|------------------------------------------------|
| **`? :`** | Substitui um `if...else` simples em uma única linha |
| **Vantagem** | Código mais compacto e direto |
| **Desvantagem** | Pode comprometer a legibilidade em casos mais complexos |

---

## COMO USAR

~~~c
condição ? verdadeiro : falso;
~~~

 - Se a condição for verdadeira, retorna expressão logo após o símbolo de ?
 - Se a condição for falsa, retorna expressão logo após o símbolo de :
<br>

**Exemplo prático:**

~~~c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int maior;

    maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    return 0;
}
~~~