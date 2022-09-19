#include <stdio.h>

int main()
{
    int coluna;
    float matriz[12][12], soma = 0, media;
    char operacao;

    scanf("%d %c", &coluna, &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 12; i++)
    {
        soma = soma + matriz[i][coluna];
    }

    if(operacao == 'S')
    {
        printf("%.1f\n", soma);
    }
    else
    {
        media = soma/12;

        printf("%.1f\n", media);
    }

    return 0;
}
