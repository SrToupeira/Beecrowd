#include <stdio.h>

int main()
{
    int N, voto, favor;

    while(scanf("%d", &N) != EOF)
    {
       favor = 0;

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &voto);

            if(voto == 1)
            {
                favor++;
            }
        }       
        
        if(favor >= float((N*2.0)/3))
        {
           printf("impeachment\n");
        }
        else
        {
           printf("acusacao arquivada\n");
        }
    }

    return 0;
}
