#include <stdio.h>

void troca(int *x, int *y)
{
    int aux;
    
    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    int casos;

    scanf("%d", &casos);

    for(int i = 0; i < casos; i++)
    {
        int n1, n2, soma = 0;

        scanf("%d %d", &n1, &n2);

        if(n2 > n1)
        {
            troca(&n1,&n2);
        }

        while(n1 - 1 > n2)
        {
            n2++;
            if(n2 % 2 != 0) soma += n2;
        }

        printf("%d\n", soma);
    }

    return 0;
}
