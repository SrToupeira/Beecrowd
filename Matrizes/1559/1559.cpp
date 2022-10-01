#include <stdio.h>

int main()
{
    int casos;

    scanf("%d", &casos);

    for(int r = 0; r < casos; r++)
    {
        int matriz[4][4];
        bool none = false;

        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                scanf("%d", &matriz[i][j]);

                if(matriz[i][j] == 2048) none = true;
            }
        }

        if(none == false)
        {
            bool quebra = true;
            none = true;

            //Baixo
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    if(matriz[i][j] != 0)
                    {
                        if(matriz[i][j] == matriz[i + 1][j] || matriz[i + 1][j] == 0)
                        {
                            printf("DOWN");
                            none = false;
                            quebra = false;
                            break;
                        }
                    }
                }
                if(quebra == false) break;
            }

            quebra = true;

            //Esquerda
            for(int i = 0; i < 4; i++)
            {
                for(int j = 3; j > 0; j--) 
                {
                    if(matriz[i][j] != 0)
                    {
                        if(matriz[i][j] == matriz[i][j - 1] || matriz[i][ j - 1] == 0)
                        {
                            if(none == false) printf(" ");
                            printf("LEFT");
                            none = false;
                            quebra = false;
                            break;
                        }
                    }
                }
                if(quebra == false) break;
            }

            quebra = true;

            //Direita
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    if(matriz[i][j] != 0)
                    {
                        if(matriz[i][j] == matriz[i][j + 1] || matriz[i][j + 1] == 0)
                        {
                            if(none == false) printf(" ");
                            printf("RIGHT");
                            none = false;
                            quebra = false;
                            break;
                        }
                    }
                }
                if(quebra == false) break;
            }

            quebra = true;

            //Cima
            for(int i = 3; i > 0; i--)
            {
                for(int j = 0; j < 4; j++)
                {
                    if(matriz[i][j] != 0)
                    {
                        if(matriz[i][j] == matriz[i - 1][j] || matriz[i - 1][j] == 0)
                        {
                            if(none == false) printf(" ");
                            printf("UP");
                            none = false;
                            quebra = false;
                            break;
                        }
                    }
                }
                if(quebra == false) break;
            }
        }

        if(none == true) printf("NONE");

        printf("\n");
    }

    return 0;
}
