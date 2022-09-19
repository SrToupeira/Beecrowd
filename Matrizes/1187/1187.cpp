#include <stdio.h>

int main()
{
    double matriz[12][12], soma = 0, j = 1, media, l = 11, m = 0;
    char operacao;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
    {
        for(int f = 0; f < 12; f++)
        {
            scanf("%lf", &matriz[i][f]);
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int f = j; f < l; f++)
        {
            soma = soma + matriz[i][f];
            m++;
        }
        j++;
        l--;
    }

    if(operacao == 'M')
    {
        media = soma / m;
        
        printf("%.1f\n", media);
    }
    else
    {
        printf("%.1f\n", soma);
    }

    return 0;
}
