#include <stdio.h>

int main()
{
    float matriz[12][12], soma = 0, media, j = 1;
    char operacao;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int f = 0; f < 12; f++)
        {
            scanf("%f", &matriz[i][f]);
        }
    }

    for(int i = 0; i < 12; i++)
    {
        for(int f = j; f < 12; f++)
        {
            soma = soma + matriz[i][f];
        }
        j++;
    }
    
    if(operacao == 'S')
    {
        printf("%.1f\n", soma);
    }
    else
    {
        media = soma / 66.0;

        printf("%.1f\n", media);
    }

    return 0;
}
