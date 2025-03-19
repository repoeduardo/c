#include <stdio.h>

/*
025. Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar 
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a 
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida. 
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main(){

    float v1, v2;
    int n1, n2;
    int opcao;

    printf("==== CALCULADORA ====");
    printf("\n1. SOMAR\n2. SUBTRAIR\n3. MULTIPLICAR\n4. DIVIDIR\n0. SAIR\n \n> ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){
        case 0:
            printf("saindo...");
            break;
        case 1:
    
            printf("n1 > ");
            scanf("%d", &n1);
            printf("n2 > ");
            scanf("%d", &n2);
            printf("\n==== RESULTADO ====\n \n%d + %d = %d\n", n1, n2, (n1 + n2));
            break;
        case 2:

            printf("n1 > ");
            scanf("%d", &n1);
            printf("n2 > ");
            scanf("%d", &n2);
            printf("\n==== RESULTADO ====\n \n%d - %d = %d\n", n1, n2, (n1 - n2));
            break;
        case 3:
    
            printf("n1 > ");
            scanf("%d", &n1);
            printf("n2 > ");
            scanf("%d", &n2);
            printf("\n==== RESULTADO ====\n \n%d x %d = %d\n", n1, n2, (n1 * n2));
            break;
        case 4:
          
            int rep = 1;
            printf("n1 (divisor)> ");
            scanf("%f", &v1);
            
            while(rep == 1){
                printf("n2 (dividendo)> ");
                scanf("%f", &v2);
                if(n2 > 0){
                    rep = 0;
                }
            }
            
            printf("\n==== RESULTADO ====\n \n%.2f / %.2f = %.2f\n", v1, v2, (v1 / v2));
            break;
        default:
            printf("saindo...");
            break;
    }

    printf("\n");
    return 0;
}