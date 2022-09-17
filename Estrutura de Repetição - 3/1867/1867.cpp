#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string N1, N2;
    int soma1, soma2;
    
    while(cin >> N1 >> N2)
    {
        if(N1 == "0" && N2 == "0") break;

        repeticao:

        soma1 = 0;

        for(int i = 0; i < N1.size();i++)
        {
            soma1 += N1[i] - '0';
        }
        if(soma1 > 9)
        {
            N1 = to_string(soma1);
            goto repeticao;
        }
        
        repeticao1:
        
        soma2 = 0;

        for(int i = 0; i < N2.size();i++)
        {
            soma2 += N2[i] - '0';
        }
        if(soma2 > 9)
        {
            N2 = to_string(soma2);
            goto repeticao1;
        }

        if(soma1 > soma2)
        {
            printf("1\n");
        }
        else
        {
            if(soma1 < soma2)
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }

    return 0;
}
