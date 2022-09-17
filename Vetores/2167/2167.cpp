#include <stdio.h>

int main()
{
    int casos, posicao = 0;
    bool flag = true;

    scanf("%d", &casos);

    int N[casos];

    scanf("%d", &N[0]);

    for(int i = 1; i < casos; i++)
    {
        scanf("%d", &N[i]);

        if(N[i] < N[i-1] && flag == true)
        {
            posicao = i + 1;
            flag = false;
        }
    }

    printf("%d\n", posicao);

    return 0;
}
