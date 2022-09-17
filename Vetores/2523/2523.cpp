#include <stdio.h>

int main()
{
    char letra[26];
    int casos, posicao;
    
    while(scanf("%s", letra) != EOF)
    {
        scanf("%d", &casos);

        for(int i = 0; i < casos; i++)
        {
            scanf("%d", &posicao);

            printf("%c", letra[posicao - 1]);
        }

        printf("\n");
    }

    return 0;
}
