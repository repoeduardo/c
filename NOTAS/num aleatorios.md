# NÚMEROS ALEATÓRIOS

As funções ``rand`` e ``srand`` em C pertencem à biblioteca padrão `<stdlib.h>` e são usadas para gerar números pseudoaleatórios.

## FUNÇÃO RAND( )

A função ``rand()`` gera um número inteiro pseudoaleatório no intervalo de 0 até RAND_MAX, uma constante definida em <stdlib.h> (geralmente pelo menos 32767, mas pode ser maior dependendo da implementação). 

Sua sintaxe é da seguinte forma

```c
int num = rand();
```

Cada chamada a ``rand()`` retorna um novo número pseudoaleatório baseado em uma sequência gerada por um algoritmo interno (geralmente um gerador linear congruencial).
A sequência é determinística, ou seja, se você iniciar com a mesma "semente" (ou seed), obterá exatamente a mesma sequência de números. 

    Em resumo, toda vez que você executar o seu programa os números aleatórios sempre serão os mesmos. Pois são gerados a partir da mesma seed.

Para resolver isso, podemos usar a função `srand()`

## FUNÇÃO SRAND( )


