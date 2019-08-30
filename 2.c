#include <stdio.h>

int main()
{
    int valor;

    printf("Informe um valor inteiro qualquer: ");
    scanf("%d", &valor);
    if( valor % 4 == 0 & valor % 5 == 0)
        printf("Eh divisivel por 4 e 5");
    else
        printf("Nao eh divisivel");
}
