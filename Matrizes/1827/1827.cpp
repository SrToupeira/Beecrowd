#include <stdio.h>

int main()
{
    //N é o tamanho da matriz;
    int n;

    while(scanf("%d", &n) != EOF)
    {
        int matriz[n][n];
        
        //preenchimento da matriz com 0's
        for(int i = 0; i < n; i++)
        {
            for(int f = 0; f < n; f++)
            {
                matriz[i][f] = 0;
            }
        }
        
        //preenchimento das diagonais com 2 e 3
        int aux = n;
        
        for(int i = 0; i < n; i++)
        {   
            matriz[i][i] = 2;
            matriz[i][aux - 1] = 3;
            aux--;
        }
        
        //preenchimento do quadrado central com 1's
        int square = n/3;

        for(int i = square; i < n - square; i++)
        {
            for(int f = square; f < n - square; f++)
            {
                matriz[i][f] = 1;
            }
        }
        
        //preenchimento do termo central com 4
        matriz[n/2][n/2] = 4;

        for(int i = 0; i < n; i++)
        {
            for(int f = 0; f < n; f++)
            {
               printf("%d", matriz[i][f]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
