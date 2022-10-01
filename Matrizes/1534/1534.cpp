#include <stdio.h>

int main()
{
    int n, aux;

    while(scanf("%d", &n) != EOF)
    { 
        int matriz[n][n];

        for(int i = 0; i < n; i++)
        {
            for(int f = 0; f < n; f++)
            {
                matriz[i][f] = 3;
            }
        }
        
        aux = n;

        for(int i = 0; i < n; i++)
        {
            if((i) != (aux - 1))
            {
                matriz[i][i] -= 2;
                matriz[i][aux - 1] --;
            }
            else
            {
                matriz[i][aux - 1] --;
            }
            aux --;
        }

        for(int i = 0; i < n; i++)
        {
            for(int f = 0; f < n; f++)
            {
                printf("%d", matriz[i][f]);
            }
            printf("\n");
        }
    }
    return 0;
}
