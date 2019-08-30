#include <stdio.h>

int main()
{
    float valor1, valor2, valor3;

    printf("Informe um valor qualquer: ");
    scanf("%f", &valor1);
    printf("Informe um valor qualquer: ");
    scanf("%f", &valor2);
    printf("Informe um valor qualquer: ");
    scanf("%f", &valor3);

    if(valor1 > valor2 > valor3)
    {
        printf("Em ordem crescente %.1f, %.1f, %.1f\n", valor3, valor2, valor1);
    }
    else if(valor2 > valor3 > valor1)
    {
        printf("Em ordem crescente %.1f, %.1f, %.1f\n", valor1, valor3, valor2);
    }
    else
    {
        printf("Em ordem crescente %.1f, %.1f, %.1f", valor2, valor1, valor3);
    }

}
