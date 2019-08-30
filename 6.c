#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media, media2, exame;

    printf("Informe a nota: ");
    scanf("%f", &nota1);
    printf("Informe a nota: ");
    scanf("%f", &nota2);
    printf("Informe a nota: ");
    scanf("%f", &nota3);
    printf("Informe a nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 7)
    {
        printf("Aprovado");
    }

    else
    {
        printf("Informe a nota do exame: ");
        scanf("%f", &exame);

        media2 = (media * exame) / 2;

        if( media2 >= 5)
        {
            printf("Aprovado");
        }
        else
        {
            printf("Reprovado");
        }
    }

}
