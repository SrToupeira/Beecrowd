#include <stdio.h>

int main()
{
    int casos, numero[100000], maximo = 0, moda;

    scanf("%d", &casos);

    for(int i = 0; i < casos; i++)
    {
        scanf("%d", &numero[i]);
    }

    for(int i = 0; i < casos; i++)
    {
        int repeticoes = 0;

        for(int f = 0 + i; f < casos; f++)
        {
            if(numero[i] == numero[f])
            {
                repeticoes++;
            }
        }

        if(repeticoes > maximo)
        {
            maximo = repeticoes;
            moda = numero[i];
        }
        else
        {
            if(repeticoes == maximo)
            {
                if(numero[i] > moda)
                {
                    moda = numero[i];
                }
            }
        }
    }
    
    printf("%d\n", moda);

    return 0;
}
