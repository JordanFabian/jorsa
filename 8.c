#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, valor4, valor5;

    printf("Informe um numeros inteiro: ");
    scanf("%d", &valor1);
    printf("Informe um numeros inteiro: ");
    scanf("%d", &valor2);
    printf("Informe um numeros inteiro: ");
    scanf("%d", &valor3);
    printf("Informe um numeros inteiro: ");
    scanf("%d", &valor4);
    printf("Informe um numeros inteiro: ");
    scanf("%d", &valor5);

    if(valor1 > valor2 | valor3 | valor4 | valor5 && valor5 < valor1 | valor2 | valor3 | valor4)
    {
        printf("O menor valor eh %d\n", valor1);
        printf("O maior valor eh %d", valor5);
    }
    else if(valor2 > valor3 | valor4 | valor5 | valor1 && valor1 < valor2 | valor3 | valor4 | valor5)
    {
        printf("O maior valor eh %d\n", valor2);
        printf("O menor valor eh %d", valor1);
    }
    else if(valor3 > valor4 | valor5 | valor1 | valor2 && valor2 < valor1 | valor3 | valor4 | valor5)
    {
        printf("O maior valor eh %d\n", valor3);
        printf("O menor valor eh %d", valor2);
    }
    else if(valor4 > valor5 | valor1 | valor2 | valor3 && valor3 < valor1 | valor2 | valor4 | valor5)
    {
        printf("O maior valor eh %d\n", valor4);
        printf("O menor valor eh %d", valor3);
    }
    else
    {
        printf("O maior valor eh %d\n", valor5);
        printf("O menor valor eh %d", valor4);
    }
}
