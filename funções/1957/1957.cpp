#include <iostream>
using namespace std;

void hexa(int x)
{
    int resto, i = 0;
    int aux[16];
    char alg[100];

    for(int i = 0; i < 10; i++)
    {
        aux[i] = 48 + i;
    }

    for(int i = 10; i < 16; i++)
    {
        aux[i] = 55 + i;
    }

    while(x != 0)
    {
        resto  = x % 16;
        x = x /16;

        alg[i] = aux[resto];
        i++;
    }

    printf("%s\n", alg);
}

int main()
{
    int numero;
    string numero_hexa;

    scanf("%d", &numero);

    hexa(numero);

    return 0;
}


