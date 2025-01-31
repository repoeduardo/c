# COMENTÁRIOS NA LINGUAGEM C

Existe duas maneiras de inserir comentários no código. 
A primeira forma é inserir duas barras seguidas (//), esse método permite inserir comentário em apenas uma única linha

~~~c
#include <stdio.h>
#include <stdlib.h>

// Autor do código: Eduardo Araujo

int main()
{
    printf("Hello world!\n");
    return 0;
}
~~~

A segunda forma permite comentar em múltiplas linhas, você precisa usar duas barras seguidas e inserir dois asteriscos entre as barras (/**/)

~~~c
#include <stdio.h>
#include <stdlib.h>

/*
 Autor do código: Eduardo Araujo
 Criado em: 31/01/2025
*/

int main()
{
    printf("Hello world!\n");
    return 0;
}
~~~