#include <stdio.h>

int main()
{
    int valor1, result;

    printf("Infome um valor qualquer: ");
    scanf("%d", &valor1);

    if(valor1 >= 0)
    {
        printf("o valor positivo eh %d", valor1);
    }
    else
    {
        result = valor1 * -1;
        printf("o valor positivo eh %d", result);
    }
}
