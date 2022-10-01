#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    int casos, n;
    
    while(scanf("%d", &n) != 0)
    {
        if(n == 0) break;

        int matriz[n][n];
        string maior;
        
        maior = to_string((int)pow(2,(n*2) - 2));
        int espacos = maior.size();

        for(int i = 0; i < n; i++)
        {
            matriz[i][0] = pow(2,i);
            
            printf("%*d", espacos,  matriz[i][0]);

            for(int f = 1; f < n; f++)
            {
                matriz[i][f] = matriz[i][f-1] * 2;

                printf("%*d", (espacos + 1),  matriz[i][f]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
