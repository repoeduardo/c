# OPERAÇÕES MATEMÁTICAS

## OPERAÇÕES BÁSICAS

| Operador | Tipo de operação | Exemplo |
|--------------|------------|---------|
| `+` | adição | 2 + 2 = 4 |
| `-` | subtração | 2 - 2 = 0 |
| `*` | multiplicação | 2 * 2 = 4 |
| `/` | divisão | 2 / 2 = 1 |
| `%` | resto de divisão | 7 % 3 = 1 |

## OPERAÇÕES DE INCREMENTO e DECREMENTO

| Operador | Tipo de operação | Exemplo | Resultado |
|--------------|------------|---------|---------|
| `variavel++` | pós incremento | `int x = 5; x++;` | 6 |
| `++variavel` | pré incremento | `int x = 5; ++x;` | 6 |
| `variavel--` | pós decremento | `int x = 5; x--;` | 4 |
| `--variavel` | pré decremento | `int x = 5; --x;` | 4 |


## OPERAÇÕES DE ATRIBUIÇÃO COMPOSTA

Atribuições compostas combinam uma operação aritmética com atribuição


Exemplo com soma
~~~c
int x = 5;
x += 3;  // equivalente a x = x + 3, x agora é 8
~~~

Exemplo com subtração
~~~c
int x = 5;
x -= 2;  // x = x - 2, x agora é 3
~~~

``*=, /=, %=`` Similar para multiplicação, divisão e módulo.


## OPERAÇÕES AVANÇADAS

Para operações matemáticas mais complexas, como exponenciação, raiz quadrada, funções trigonométricas, etc., você precisa incluir a biblioteca ``<math.h>``:

~~~c
#include <math.h>

// Exemplos:
float raizQuadrada = sqrt(16.0);  // Raiz quadrada de 16
float potencia = pow(2.0, 3.0);    // 2 elevado à 3ª potência
float seno = sin(3.14159 / 2);  // Seno de 90 graus (π/2)
~~~

**OBS:** Operações avançadas requerem essa biblioteca, e algumas funções podem precisar de ``-lm`` durante a compilação (em sistemas baseados em Unix).

