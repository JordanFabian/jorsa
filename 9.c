#include <stdio.h>

int main()
{
    int num, result;

    printf("Informe um numero qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("O numero eh par", num);
    }
    else
    {
        printf("O numero eh impar", num);
    }
}
