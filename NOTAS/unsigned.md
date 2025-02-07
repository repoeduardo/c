# OPERADOR UNSIGNED

O operador `unsigned` na linguagem C especifica que uma variável só pode armazenar valores positivos, ou seja, não-negativos.  Em C, quando você declara uma variável `unsigned`, você está dizendo ao compilador que essa variável só vai armazenar valores não negativos. Isso significa que todo o espaço de bits disponível para essa variável será usado para representar o valor, não para representar o sinal. Na computação em geral, os números são armazenados em bits, e um bit pode ser usado para indicar o sinal (positivo ou negativo) em representações com sinal. Remover essa necessidade do bit de sinal permite que todos os bits sejam usados para representar o valor numérico, resultando em um maior alcance de valores positivos.



Quando usamos `unsigned`, removemos o bit de sinal, permitindo que a variável represente **o dobro de valores positivos**.  

| Tipo | Tamanho (bits) | Intervalo `normal` | Intervalo `unsigned` |
|------|---------------|--------------------|----------------------|
| `char` | 8 bits | -128 a 127 | 0 a 255 |
| `short` | 16 bits | -32.768 a 32.767 | 0 a 65.535 |
| `int` | 32 bits | -2.147.483.648 a 2.147.483.647 | 0 a 4.294.967.295 |
| `long` | 64 bits | -9 quintilhões a +9 quintilhões | 0 a 18 quintilhões |

**Resumo:** `unsigned` dobra a capacidade positiva, mas remove a possibilidade de números negativos.


## COMO USAR

A sintaxe do operador funciona assim

~~~c
unsigned tipo variavel;
~~~

O objetivo do operador unsigned é garantir que a variável só armazene valores positivos. Em um loop `for(){}` normalmente o iterador do loop (é comum receber o nome de *contador* ou *index*) permaneça sempre positivo:

~~~c
unsigned int index;
for(index = 0; index < array_size; index++) {
    // ...
}
~~~

Caso for imprimir na tela uma variável do tipo `unsigned` usando o `printf()` use o especificador de formato `%u`

~~~c
unsigned int idade = 84;
printf("Você tem %u anos", idade);
~~~