#include <stdio.h>

int main()
{   
    int l, c;

    //quantidade de linhas e colunas da matriz
    while(scanf("%d %d", &l, &c) != EOF)
    {
        //matriz de análise, e matriz resposta
        int matriz[l + 2][c + 2], matrizR[l][c];

        //reset da matriz
        for(int i = 0; i < l + 2; i++)
        {
            for(int f = 0; f < c + 2; f++)
            {
                matriz[i][f] = 0;
            }
        }

        //preenchimento da matriz
        for(int i = 1; i <= l; i++)
        {
            for(int f = 1; f <= c; f++)
            {
                scanf("%d", &matriz[i][f]);
            }
        }

        //checagem da matriz que demonstra as distribuições dos pães de queijo
        //assim como a construção da matriz resposta
        
        for(int i = 1; i <= l; i++)
        {
            for(int f = 1; f <= c; f++)
            {
                if(matriz[i][f] == 1)
                {//na posicao atual da matriz de análise há um 
                    matrizR[i][f] = 9;
                }
                else
                {//na posicao atual da matriz de análise não há um, logo sera a soma das adjacentes
                    matrizR[i][f] = matriz[i-1][f] + matriz[i+1][f] + matriz[i][f-1] + matriz[i][f+1];
                }
                printf("%d", matrizR[i][f]);
            }
            printf("\n");
        }
    }
    return 0;
}
