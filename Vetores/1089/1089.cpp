#include <stdio.h>

int main()
{
   int casos, N[100001];

    while(scanf("%d", &casos) != EOF)
    {
        if(casos == 0) break;

        int picos = 0;

        for(int i = 2; i < casos + 2; i++)
        {
            scanf("%d", &N[i]);
        }
        
        N[1] = N[casos + 1];
        N[0] = N[casos];

        for(int i = 2; i < casos + 2;i++)
        {
            if(N[i] > N[i-1] && N[i-1] < N[i - 2])
            {
                picos++;
            }
            else
            {
                if(N[i] < N[i -1] && N[i - 1] > N[i-2])
                {
                    picos++;
                }
            }
        }
        printf("%d\n", picos);
    }
    return 0;
}
