# ARRAYS NA LINGUAGEM C

Arrays - vetores, em português - são **estruturas de dados que armazenam uma sequência de elementos do mesmo tipo** em posições consecutivas de memória:  Se cada ``int`` ocupa **4 bytes**, o vetor numeros[5] ocupará 20 bytes contínuos (5 elementos × 4 bytes). O endereço do primeiro elemento (numeros[0]) é o endereço base do vetor.

Exemplo prático: Imagine uma prateleira com 10 gavetas, onde cada gaveta pode guardar um número inteiro. Você pode acessar cada gaveta pelo seu número (índice)

## CARACTERISTICAS PRINCIPAIS

- Todos os elementos têm o mesmo tipo (ex.: int, float, char).
- O tamanho do vetor é fixo e deve ser definido no momento da declaração ou alocado dinamicamente.
- Os elementos são acessados por índices (posições), começando em 0. 


## COMO DECLARAR OU INICIALIZAR UM ARRAY

### DECLARAÇÃO

A sintaxe básica de declaração funciona assim: <br>
`tipo nome_do_vetor[tamanho];`

Exemplo
~~~c
int numeros[5];  // Vetor de 5 inteiros
~~~

Isso cria um espaço na memória para cinco inteiros consecutivos

### INICIALIZAÇÃO

Existem diferentes formas de inicializar um array

**1 - INICIALIZAÇÃO DIRETA**

~~~c
int numeros[5] = {1, 2, 3, 4, 5};
~~~
Cada número será armazenado em uma posição específica

**2 - INICIALIZAÇÃO PARCIAL**

~~~c
int numeros[5] = {1, 2};
~~~
O restante será inicializado como 0

**3 - INICIALIZAÇÃO AUTOMÁTICA (COM TAMANHO IMPLÍCITO)**

~~~c
int numeros[] = {10, 20, 30};
~~~
Tamanho definido automaticamente como 3


## COMO ACESSAR E MODIFICAR VALORES

Os elementos do vetor são acessados pelo índice, que começa em **0**.  

**Dica:** use [estruturas de repetição](estruturas%20de%20repeticao.md) para percorrer e iteragir com arrays

**Atribuindo valores:**  
```c
numeros[0] = 10;  // Modifica o primeiro elemento
numeros[1] = 20;  // Modifica o segundo elemento
```

**Lendo valores:**  
```c
printf("O primeiro número é: %d\n", numeros[0]);
```


## LIMITAÇÕES

 
- **Tamanho fixo** → Não pode ser redimensionado após a declaração.
- **Índices fora do limite** → Acessar um índice inválido pode causar erros graves.
- **Memória estática** → O tamanho precisa ser conhecido em tempo de compilação.
