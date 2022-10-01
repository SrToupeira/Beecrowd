#include <stdio.h>

int main()
{
    int inst;
    unsigned int matriz[9][9];

    scanf("%d", &inst);

    for(int i = 1; i <= inst; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            for(int f = 0; f < 9; f++)
            {
                scanf("%u", &matriz[j][f]);
            }
        }

        bool resultado = true;
        int aux[9] = {1,2,3,4,5,6,7,8,9};

        //Verificação linha por linha 
        for(int j = 0; j < 9; j++)
        {
            int l = 0;

            for(int f = 0; f < 9; f++)
            {
                for(int h = 0; h < 9; h++)
                {
                    if(aux[f] == matriz[j][h])
                    {
                        l++;
                        break;
                    }
                }
            }
            if(l != 9)
            {//a linha nao possui de 1 a 9
                resultado = false;
                goto impressao;
            }
        }

        //Verificação coluna por coluna
        for(int j = 0; j < 9; j++)
        {
            int l = 0;

            for(int f = 0; f < 9; f++)
            {
                for(int h = 0; h < 9; h++)
                {
                    if(aux[f] == matriz[h][j])
                    {
                        l++;
                        break;
                    }
                }
            }
            if(l != 9)
            {//a coluna nao possui de 1 a 9
                resultado = false;
                goto impressao;
            }
        }

        //Verificação 3x3: percorre matriz em 9 quadros de 3
        for(int f = 0; f < 9; f+=3)
        {//percorre linhas da matriz de 3 em 3

            for(int g = 0; g < 9; g+=3)
            {//percorre as colunas da matriz de 3 em 3

                int l = 0;

                for(int j = 0; j < 9; j++)
                {//contador do vetor auxiliar

                    bool flag = true;

                    //percorrem grid 3x3
                    for(int h = f; h < f + 3; h++)
                    {//percorre linhas do grid 3x3
                        
                        for(int k = g; k < g + 3; k++)
                        {//percorre colunas do grid 3x3
                            if(aux[j] == matriz[h][k])
                            {
                                l++;
                                flag = false;
                            }
                            if(flag == false) break;
                        }
                        if(flag == false) break;
                    }
                    if(flag == true)
                    {//um numero nao existia dentro do grid 3x3
                        resultado = false;
                        goto impressao;
                    }
                }
                if(l != 9)
                {//a linha nao possui de 1 a 9
                    resultado = false;
                    goto impressao;
                }
            }
        }

        impressao:

        if(resultado == true)
        {//a matriz é uma solução
            printf("Instancia %d\n", i);
            printf("SIM\n");
        }
        else
        {//a matriz nao é uma solucao
            printf("Instancia %d\n", i);
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}
