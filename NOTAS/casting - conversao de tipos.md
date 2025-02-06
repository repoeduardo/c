# CASTING ou CONVERSÃO DE TIPOS

A conversão de tipos (ou casting) em C é o processo de mudar o tipo de uma variável ou expressão para outro tipo durante a execução do programa.


## CONVERSÃO IMPLICITA (Implicit Casting)

É uma conversão realizada automáticamente pelo compilador. A conversão é feita quando um tipo menor é atribuído a um tipo maior, por exemplo quando um ``int`` é convertido para ``float`` ou ``double``; Ou quando um `char` é convertido para `int` (pois um char é basicamente um inteiro pequeno)

~~~~c
int x = 10;
double y = x; // x é implicitamente convertido para double
~~~~


## CONVERSÃO EXPLICÍTA (Explicit Casting)

É uma conversão manual, quando o programador força a conversão usando (tipo) antes da variável. Por exemplo, convertendo um ``float`` para ``int``

~~~~c
#include <stdio.h>

int main() {
    float pi = 3.14159;
    int num_inteiro = (int) pi;  // Conversão explícita de float para int
    printf("Valor de inteiro: %d\n", num_inteiro);
    return 0;
}
~~~~
**Explicação**: O valor 3.14159 foi truncado para 3 porque ``int`` não armazena decimais.


## CUIDADOS 

