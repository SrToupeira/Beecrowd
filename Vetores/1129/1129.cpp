#include <stdio.h>

int main()
{
    int N, opcao;
    bool flag;
    char resposta;

    while(scanf("%d", &N) != EOF)
    {
        if(N == 0) break;

        for(int i = 0; i < N; i++)
        {
            resposta = 42;
            flag = true;

            for(int f = 0; f < 5; f++)
            {
                scanf("%d", &opcao);

                if(opcao <= 127)
                {
                    if(flag == true)
                    {
                        resposta = f + 65;
                        flag = false;
                    }
                    else resposta = 42;
                }
            }
            printf("%c\n", resposta);
        }
    }

    return 0;
}

