#include <stdio.h>

int main()
{
    int casos, tamanho, direita[100001], esquerda[100001];
    char pe;

    while(scanf("%d", &casos) != EOF)
    {
        int d = 0, e = 0, pares = 0;

        for(int i = 0; i < casos; i++) //separação dos sapatos em grupos direito e esquerdo;
        {
            scanf("%d %c", &tamanho, &pe);
            
            if(pe == 68)
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

        for(int i = 0; i < d; i++) //comparação dos sapatos para a formação de pares;
        {
            for(int f = 0; f < e; f++)
            {
                if(direita[i] == esquerda[f])
                {
                    e--;
                    d--;
                    pares++;

                    for(int k = f; k < e; k++)
                    {
                        esquerda[k] = esquerda[k+1];
                    }

                    for(int k = i; k < d; k++)
                    {
                        direita[k] = direita[k+1];
                    }
                    i--;

                    break;
                }
            }
        }

        printf("%d\n", pares);
    }
    return 0;
}
