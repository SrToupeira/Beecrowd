#include <stdio.h>

int main()
{
    long long int fibonacci[61];
    int casos, posicao;

    fibonacci[0] = 0; fibonacci[1] = 1;

    for(int i = 2; i < 61; i++)
    {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }

    scanf("%d", &casos);

    for(int i = 0; i < casos; i++)
    {
        scanf("%d", &posicao);

        printf("Fib(%d) = %lld\n", posicao, fibonacci[posicao]);
    }

    return 0;
}
