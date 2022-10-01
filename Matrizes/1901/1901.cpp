#include <stdio.h>

int main()
{
    int n, quantidade = 0, linha, coluna;

    scanf("%d", &n);

    int floresta[n+1][n+1], especies[1001] = {};

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            scanf("%d", &floresta[i][j]);
        }
    }
    
    for(int i = 0; i < n*2; i++)
    {
        scanf("%d %d", &linha, &coluna);

        if(floresta[linha][coluna] != especies[floresta[linha][coluna]])
        {
            especies[floresta[linha][coluna]] = floresta[linha][coluna];
            quantidade++;
        }
    }

    printf("%d\n", quantidade);

    return 0;
}
