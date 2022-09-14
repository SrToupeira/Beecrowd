#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string N1, N2;
    int soma1 = 0, soma2 = 0, x = 0;
    
    while(cin >> N1 >> N2 && N1 != "0" && N2 != "0")
    {
        for(int i = 0; i < sizeof(N1); i++)
        {
            int x = stoi(N1);

            soma1 += x;
        }
        
        x = 0;

        for(int i = 0; i < sizeof(N2); i++)
        {
            x = stoi(N2);

            soma2 += x;
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

