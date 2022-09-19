#include <stdio.h>

int main()
{
    float matriz[12][12], soma = 0, j = 10, media;
    char operacao;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int f = 0; f < 12; f++)
        {
            scanf("%f", &matriz[i][f]);
        }
    }

    for(int i = 0; i < 11; i++)
    {
        for(int f = j; f >= 0; f--)
        {
            soma = soma + matriz[i][f];
        }
        j--;
    }

    if(operacao == 'M')
    {
        media = soma / 66.0;
        
        printf("%.1f\n", media);
    }
    else
    {
        printf("%.1f\n", soma);
    }

    return 0;
}
