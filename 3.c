#include <stdio.h>

int main()
{
    int valor1, valor2, result;

    printf("Informe um valor inteiro qualquer: ");
    scanf("%d", &valor1);
    printf("Informe outro valor inteiro qualquer: ");
    scanf("%d", &valor2);

    if(valor1 >= valor2)
    {
        result = valor1 - valor2;
        printf("A diferenca eh %d", result);
    }
    else
    {
        result = valor1 - valor2;
        printf("A diferenca eh %d", result);
    }
}
