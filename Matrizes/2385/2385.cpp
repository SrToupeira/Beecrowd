#include <stdio.h>

int main()
{
    unsigned long long int N, P, Q, R, S, X, Y;
    unsigned long long int matrizC = 0, linha, coluna;

    //leitura do tamanho da matriz
    scanf("%lld", &N);

    //leitura dos parametros de construcao
    scanf("%lld %lld %lld %lld %lld %lld", &P, &Q, &R, &S, &X, &Y);

    //selecao da posicao da matriz C
    scanf("%lld %lld", &linha, &coluna);
    
    //declaracao da linha e coluna necessária
    unsigned long long int matrizA[N+1], matrizB[N+1];

    //contrucao da linha e coluna necessária
    for(int j = 1; j <= N; j++)
    {
        matrizA[j] = (P * linha  + Q * j) % X;
        matrizB[j] = (R * j + S * coluna) % Y;
    }

    //calculo do valor da posicao selecionada;
    for(int i = 1; i <= N; i++)
    {
        matrizC += matrizA[i] * matrizB[i];
    }

    printf("%lld\n", matrizC);

    return 0;
}
