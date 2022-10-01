#include <stdio.h>

int main()
{
    int N, M, ultimo = -1;

    scanf("%d %d", &N, &M);

    unsigned long long int matriz[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%lld", &matriz[i][j]);
        }
    }

    //verificacao da matriz
    for(int i = 0; i < N; i++)
    {
        bool flag = true;

        for(int j = 0; j < M; j++)
        {
           if(matriz[i][j] != 0)
           {//a linha atual possui um numero != 0;
               if(j <= ultimo)
               {//um termo diferente de 0 apareceu na coluna anterior a X;
                   printf("N\n");
                   return 0;
               }
               flag = false;
               ultimo = j;
               break;
           }
        }

        if(flag == true)
        {//todos os valores da linha sao equivalentes a 0;
            ultimo = M-1;
        }
    }

    printf("S\n");

    return 0;
}
