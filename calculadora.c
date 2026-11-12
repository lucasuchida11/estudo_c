#include <stdio.h>
#include <string.h>

int main() 
{
    float a, b, resultado;
    char operacao[20];

    printf("Qual operação desejar realizar?\n");
    printf("1)Soma\n2)Subtracao\n3)Divisao\n4)Multiplicacao\n");

    printf("Escolha: ");
    scanf("%19s", operacao);

    if (strcmp(operacao, "1") == 0) 
    {
        printf("Numero 1: ");
        scanf(" %f", &a);
        printf("Numero 2: ");
        scanf(" %f", &b);

        resultado = a + b;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (strcmp(operacao, "2") == 0) 
    {
        printf("Numero 1: ");
        scanf(" %f", &a);
        printf("Numero 2: ");
        scanf(" %f", &b);

        resultado = a - b;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (strcmp(operacao, "3") == 0) 
    {
        printf("Numero 1: ");
        scanf(" %f", &a);
        printf("Numero 2: ");
        scanf(" %f", &b);

        if (b == 0) 
        {
            printf("Erro: divisao por zero.\n");
            return 1;
        }

        resultado = a / b;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (strcmp(operacao, "4") == 0) 
    {
        printf("Numero 1: ");
        scanf(" %f", &a);
        printf("Numero 2: ");
        scanf(" %f", &b);

        resultado = a * b;
        printf("Resultado: %.2f\n", resultado);
    }
    else 
    {
        printf("Operacao invalida.\n");
    }

    return 0;
}