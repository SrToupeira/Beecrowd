#include <stdio.h>

int main()
{   
    int qntd, poste[5001], aux[5001];

    while(scanf("%d", &qntd))
    {
        if(qntd == 0) break;

        int novos = 0;
        bool flag = true;
        int aux[5001] = {0};

        for(int i = 0; i < qntd; i++)
        {
            scanf("%d", &poste[i]);
        }
        
        for(int i = 0; i < qntd; i++)
        {
            if(poste[i] == 1)
            {
                int f = 0;
                
                for(i = i; i < qntd; i++)
                {
                    aux[f] = poste[i];
                    f++;
                }

                for(int k = 0; k < i; k++)
                {
                    aux[f] = poste[k];
                }
                flag = false;
                break;
            }
        }

        for(int i = 0; i < qntd; i++)
        {
            printf("%d\n", aux[i]);
        }
        
        if(flag == false)
        {
            for(int i = 1; i < qntd + 1; i++)
            {
                if(aux[i] == 0 && aux[i-1] == 0)
                {
                    aux[i] = 1;
                    novos++;
                }
            }
        }
        else
        {
            poste[qntd + 1] = poste [0];

            for(int i = 1; i < qntd + 1; i++)
            {
                if(poste[i] == 0 && poste[i-1] == 0)
                {
                    poste[i] = 1;
                    novos++;
                }
            }
        }
        printf("%d\n", novos);
    }
    return 0;
}
