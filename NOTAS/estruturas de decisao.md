# ESTRUTURA DE DECISÃO

As estruturas de decisão (ou controle de fluxo) em C são usadas para executar diferentes blocos de código com base em condições.

## ESTRUTURAS  

| Estrutura        | Quando Usar? |
|-----------------|---------------------------------------------------|
| **`if`**         | Para testar uma única condição |
| **`if...else`**  | Quando há **duas opções** (se verdadeiro ou falso) |
| **`if...else if...else`** | Para testar **múltiplas condições** diferentes |
| **`switch`**     | Quando há **múltiplos valores fixos** para a mesma variável |

---

## COMO USAR

A sintaxe é bem simples. Vamos dar uma olhada:


**Estrutura** `if`
~~~c
if (condição verdadeira){
    // execute esse bloco de código
}
~~~
A estrutura ``if`` executa um bloco de código se a condição for verdadeira (1).

<br>

**Estrutura** `if else`
~~~c
if (condição verdadeira){
    // execute esse bloco de código
} else {
    // Senão, execute esse bloco de código
}
~~~
A estrutura ``if else`` permite executar um bloco de código alternativo quando a condição for falsa (0).
<br>

**Estrutura** `if else if else...`
~~~c
if (condição1) {
    // Código se condição1 for verdadeira
} else if (condição2) {
    // Código se condição2 for verdadeira
} else {
    // Código se nenhuma condição for verdadeira
}
~~~
Essa estrutura permite testar múltiplas condições.
<br>

**Estrutura** `switch`

~~~c
switch (variavel) {
    case valor1:
        // Código se variavel == valor1
        break;
    case valor2:
        // Código se variavel == valor2
        break;
    default:
        // Código se nenhuma condição for atendida
}
~~~

O ``switch`` é útil para substituir múltiplos ``if...else if...else`` quando há várias condições baseadas no mesmo valor.
