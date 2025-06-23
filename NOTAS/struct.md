# STRUCT

## O que é um struct em C?

Um struct (abreviação de structure) em C **é um tipo de dado definido pelo usuário que permite agrupar variáveis de diferentes tipos sob um único nome**. É usado para representar um registro ou uma entidade que possui múltiplos atributos relacionados, como, por exemplo, um "Aluno" com nome, idade e nota

~~~c
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
~~~

## Quando usar um struct?

Use um struct quando:

- Você precisa agrupar dados relacionados: Por exemplo, para representar objetos do mundo real (como um carro, uma pessoa, um ponto no plano cartesiano)

- Você quer organizar dados de forma clara: Em vez de usar várias variáveis soltas, um struct melhora a legibilidade e a manutenção do código.

- Você precisa passar múltiplos dados para funções: Em vez de passar vários parâmetros, você pode passar um único struct.

- Você trabalha com listas ou arrays de objetos complexos: Um array de structs é útil para armazenar múltiplos registros, como uma lista de alunos.

Exemplo de caso de uso: Um programa que gerencia uma lista de alunos, onde cada aluno tem nome, idade e nota

## Como usar o struct

Há duas maneiras de usar o struct: com ou sem a palavra `typedef`


### Sem typedef

**DECLARAÇÃO**

~~~c
struct Aluno {
    char nome[50];
    int idade;
    double nota;
};
~~~

**CRIAÇÃO**

~~~c
struct Aluno a1; // Declara uma variável do tipo Aluno
~~~


### Com typedef

**DECLARAÇÃO**

~~~c
typedef struct{
    char nome[50];
    int idade;
    double nota;
} Aluno;
~~~

**CRIAÇÃO**

~~~c
Aluno a1;
~~~


### Acessando os campos

~~~c
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    // Criando uma variável do tipo Aluno
    Aluno aluno1;
    
    // Atribuindo valores aos campos
    strcpy(aluno1.nome, "João");
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    // Exibindo os valores
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    // Usando um ponteiro para struct
    Aluno *ptr = &aluno1;
    printf("Nome (via ponteiro): %s\n", ptr->nome);

    return 0;
}
~~~

Outro exemplo:

~~~c
#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

int main(){

    Pessoa p1;
    p1.idade = 23;
    p1.sexo = 'f';
    strcpy(p1.nome, "Eduardo Araujo");

    printf("Nome: %s \n", p1.nome);
    printf("Idade: %d \n", p1.idade);
    printf("Sexo: %c \n", p1.sexo);

    printf("\n");
    return 0;
}
~~~