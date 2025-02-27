# NÚMEROS ALEATÓRIOS

As funções ``rand`` e ``srand`` em C pertencem à biblioteca padrão `<stdlib.h>` e são usadas para gerar números pseudoaleatórios.

## FUNÇÃO RAND( )

A função ``rand()`` gera um número inteiro pseudoaleatório no intervalo de 0 até `RAND_MAX`, uma constante definida em <stdlib.h> (geralmente pelo menos 32767, mas pode ser maior dependendo da implementação). 

Sua sintaxe é da seguinte forma

```c
int num = rand();
```

Cada chamada a ``rand()`` retorna um novo número pseudoaleatório baseado em uma sequência gerada por um algoritmo interno (geralmente um gerador linear congruencial).
A sequência é determinística, ou seja, se você iniciar com a mesma "semente" (ou seed), obterá exatamente a mesma sequência de números. 

    Em resumo, toda vez que você executar o seu programa os números aleatórios sempre serão os mesmos. Pois são gerados a partir da mesma seed.

Para resolver isso, podemos usar a função `srand()`

## FUNÇÃO SRAND ( )

A função `srand()` define uma nova semente e inicializa o gerador de números pseudoaleatórios usado por rand(). Isso permite que você altere o ponto de partida da sequência pseudoaleatória. Porém, existe um problema: `srand()` precisa de um número inteiro para ser usado como seed, por exemplo se definirmos `srand(42)` será gerado uma nova seed a partir desse número. No entanto, voltamos ao mesmo problema porque sempre que o programa for executado, será usado a mesma seed (42 nesse exemplo) e por fim voltamos a estaca zero. Para resolver esse problema, precisamos de algo que mude seu valor a todo instante, sendo assim a solução mais usada hoje em dia é usar uma variável interna do computador que armazena o hora. 

## BIBLIOTECA <TIME.H>

Para evitar que a sequência seja a mesma em cada execução, é comum usar o tempo atual como semente, utilizando a função `time()` da biblioteca `<time.h>`

Exemplo prático

~~~c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Usa o tempo atual como semente
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}
~~~

A função `time(NULL)` retorna o número de segundos desde 1 de janeiro de 1970 (Unix Epoch), que muda constantemente, garantindo uma semente diferente a cada execução.

## INTERVALOS DE NÚMEROS ALEATÓRIOS
Para obter números em um intervalo específico, você pode usar o operador módulo ou resto de divisão -> (%) <br>

Sintaxe: `rand() % N` 
Regra: intervalo de 0 a N-1

~~~c
int num = rand() % N; // Exemplo: 0 a 9 se N = 10
~~~
No código acima, se N = 10 então será gerado números de 0 a 9 seguindo a regra (0 a N-1)
<br>
Mas agora suponha que você queira uma sequência aleatório de 5 a 10 números. Suga a seguinte fórmula>

~~~c
int num = minimo + (rand() % (maximo - minimo + 1));

// Exemplo: minimo = 5 e maximo = 10
int num = 5 + (rand() % (10 - 5 + 1));
~~~

