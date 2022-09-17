#include <stdio.h>

int main()
{
    int Menor = 1001, tamanho, posicao, valor;

    scanf("%d", &tamanho);

    int N[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &valor);
        N[i] = valor;

        if(N[i] < Menor)
        {
            Menor = N[i];
            posicao = i;
        }
    }
        
    printf("Menor valor: %d\n", Menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
