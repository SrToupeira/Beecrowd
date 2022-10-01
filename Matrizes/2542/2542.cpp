#include <stdio.h>

int main()
{
    int a, lm, ll, cm, cl, Ae, bm, bl;

    //Atributos correspondem a quantidade de colunas que compoe o baralho
    while(scanf("%d", &a) != EOF)
    {
        //Quantidade de cartas equivale a quantidade de linhas da matriz que
        //compoe o baralho
        scanf("%d %d", &lm, &ll);

        //Definição do tamanho do baralho de cada jogador
        int bm[lm][a], bl[ll][a];
        
        //montagem do baralho do marcos
        for(int i = 0; i < lm; i++)
        {
            for(int f = 0; f < a; f++)
            {
                scanf("%d", &bm[i][f]);
            }
        }

        //montagem do baralho do leo
        for(int i = 0; i < ll; i++)
        {
            for(int f = 0; f < a; f++)
            {
                scanf("%d", &bl[i][f]);
            }
        }

        //escolha de carta corresponde a linha
        scanf("%d %d", &cm, &cl);

        //Atributo escolhido corresponde a coluna
        scanf("%d", &Ae);

        //comparação do atributo de cada carta
        if(bm[cm-1][Ae-1] > bl[cl-1][Ae-1])
        {
            printf("Marcos\n");
        }
        else
        {
            if(bm[cm-1][Ae-1] < bl[cl-1][Ae-1])
            {
                printf("Leonardo\n");
            }
            else
            {
                printf("Empate\n");
            }
        }
    }
    return 0;
}
