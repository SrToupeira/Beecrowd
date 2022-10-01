#include <stdio.h>

int main()
{
    unsigned int linha, coluna;
    unsigned int id;

    while(scanf("%u %u", &linha, &coluna) != EOF)
    {
        if(linha == 0 && coluna == 0) break;

        int jogador[10001] = {}, reps = 0, reps2 = 0, maior, n = 0, segundo[500] = {};

        for(int i = 0; i < linha * coluna; i++)
        {
            scanf("%u", &id);

            jogador[id] = jogador[id] + 1;
        }

        for(int i = 0; i < 10001; i++)
        {
            if(jogador[i] > reps)
            {//O jogador i é o melhor
                reps = jogador[i];
                maior = i;
            }
        }

        for(int i = 0; i < 10001; i++)
        {
            if(jogador[i] < reps && jogador[i] > reps2)
            {//o jogador i é o segundo melhor
                n = 0;
                segundo[n] = i;
                reps2 = jogador[i];
            }
            else
            {
                if(jogador[i] == reps2)
                {//Há mais de um segundo melhor jogador
                    n++;
                    segundo[n] = i;
                }
            }
        }

        for(int i = 0; i <= n; i++)
        {
            printf("%d ", segundo[i]);
        }
        printf("\n");
    }

    return 0;
}
