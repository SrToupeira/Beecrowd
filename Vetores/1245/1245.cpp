#include <stdio.h>

int main()
{
    int casos, tamanho, direita[100000], esquerda[100000];
    char pe;

    while(scanf("%d", &casos) != EOF)
    {
        int f = 0, d = 0, e = 0, pares = 0;

        for(int i = 0; i < casos; i++)
        {
            scanf("%d %c", &tamanho, &pe);
            
            if(pe == 44)
            {
                direita[d] = tamanho;
                d++;
            }
            else
            {
                esquerda[e] = tamanho;
                e++;
            }
        }

        for(int i = 0; i < 3; i++) printf("%d", direita[i]);
        
        for(int i = 0; i < casos/2; i++)
        {
            for(int f = 0; f < casos/2; f++)
            {
                if(direita[i] == esquerda[f]) pares++;
            }
        }

        printf("%d", pares);

        break;
    }
    return 0;
}
