#include <stdio.h>

int main()
{
    int N, c = 1, x, y;

    scanf("%d", &N);

    int matriz[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            matriz[i][j] = c;
            c++;
        }
    }

    scanf("%d %d", &x, &y);

    int qntd = 0, vezes = 0, total = 0;

    printf("%d", matriz[x][y]);
    qntd++;
    total++;

    while(qntd < N*N)
    {
        vezes ++;

        for(int i = 0; i < vezes; i++)
        {
            if(qntd == N*N) break;
            total++;
            y++;
            if(x < N && y < N && x >= 0 && y>= 0)
            {
                printf(" %d", matriz[x][y]);
                qntd++;
            }
        }

        for(int i = 0; i < vezes; i++)
        {
            if(qntd == N*N) break;
            total++;
            x++;
            if(x < N && y < N && x >= 0 && y>= 0)
            {
                printf(" %d", matriz[x][y]);
                qntd++;
            }
        }

        vezes++;

        for(int i = 0; i < vezes; i++)
        {
            if(qntd == N*N) break;
            total++;
            y--;
            if(x < N && y < N && x >= 0 && y>= 0)
            {
                printf(" %d", matriz[x][y]);
                qntd++;
            }
        }

        for(int i = 0; i < vezes; i++)
        {
            if(qntd == N*N) break;
            total++;
            x--;
            if(x < N && y < N && x >= 0 && y>= 0)
            {
                printf(" %d", matriz[x][y]);
                qntd++;
            }
        }
    }

    printf("\n%d\n", total);

    return 0;
}
