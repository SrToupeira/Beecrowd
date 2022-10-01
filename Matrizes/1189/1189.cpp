#include <stdio.h>

int main()
{
    double matriz[12][12], media, soma = 0;
    char operacao;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int f = 0; f < 12; f++)
        {
            scanf("%lf", &matriz[i][f]);
        }
    }

    int j = 1, h = 11, m = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int f = j; f < h; f++)
        {
            soma = soma + matriz[f][i];
            m++;
        }
        j++;
        h--;
    }

    if(operacao == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        media = soma / m;

        printf("%.1lf\n", media);
    }

    return 0;
}
