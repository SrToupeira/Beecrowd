#include <stdio.h>
#include <cstring>

int main()
{
    char codigo[1001];
    int l = 0;
    
    while(scanf("%s", codigo) != EOF)
    {
        if(l != 0)printf(" ");

        for(int i = 0; i < (int)strlen(codigo); i++)
        {
            printf("%c", codigo[i+1]);
            i++;
        }

        l = 1;
    }
    printf("\n");

    return 0;
}
