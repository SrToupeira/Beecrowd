#include <stdio.h>

int main()
{
    float A[100], number;

    for(int i = 0; i < 100; i++)
    {
        scanf("%f", &number);

        if(number <= 10.0)
        {
            A[i] = number;
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}
