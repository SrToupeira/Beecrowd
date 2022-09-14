#include <stdio.h>

int main()
{
    int N[1000], T, f = 0;

    scanf("%d", &T);
    
    for(int i = 0; i < 1000; i++)
    {
        N[i] = f;

        if(f < T - 1)
        {
            f++;
        }
        else f = 0;

        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
