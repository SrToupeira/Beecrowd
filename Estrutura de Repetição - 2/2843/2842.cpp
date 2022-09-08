#include <stdio.h>

int main()
{
	int 
    
    scanf("%d", &N);
    
    //listagem de participantes x1,x2,x3...

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &tempo[i]);
    }
    
    i = 0;
    
    //primeiro processo de eliminação

    for(int f = 0; f < N; f++)
    {
        if(tempo[f] > tempo[f+1])
        {
            fase2[i] = tempo[f+1]
            tempo[f] = 1;
        }
        else
        {
            if(tempo[f] < tempo[f+1])
            {
                fase2[i] = tempo[f]
                tempo[f+1] = 1;
            }
            else
            {
                if(tempo[f] == tempo[f+1]
                {
                    fase2[i] = tempo[f];
                    tempo[f+1] = 1;
                }
            }
        
        }

        i++;
    }
    return 0;
}
