#include <stdio.h>

int main()
{
    int valor, par[5], impar[5], p = 0, j = 0;
    
    for(int i = 0; i < 15; i++)
    {
        scanf("%d", &valor);

        if(valor % 2 == 0)
        {
            par[p] = valor;
            p++;

            if(p == 5)
            {
                for(int p = 0; p < 5; p++)
                {
                    printf("par[%d] = %d\n", p, par[p]);
                }
                p = 0;
            }
        }
        else
        {
            impar[j] = valor;
            j++;

            if(j == 5)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                j = 0;
            }
        }
    }
    
    for(int i = 0; i < j; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for( int i = 0; i < p; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
                
    return 0;
}
