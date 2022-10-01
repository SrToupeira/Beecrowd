#include <stdio.h>

int main()
{
    int m = 0;
    double matriz[12][12], soma = 0;
    char operacao;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int f = 0; f < 12; f++)
        {
            scanf("%lf", &matriz[i][f]);
        }
    }
    int l = 1, j = 11;

    for(int i = 11; i > 6; i--)
    {
        for(int f = l; f < j; f++)
        {
            soma = soma + matriz[f][i];
            m++;
        }
        l++;
        j--;
    }

    if(operacao == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        double media = soma / m;

        printf("%.1lf\n", media);
    }

    return 0;
}
