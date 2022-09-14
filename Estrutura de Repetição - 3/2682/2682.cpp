#include <stdio.h>

int main()
{
    long int numero, anterior = 0;
    bool flag = true;

    while(scanf("%ld", &numero) != EOF)
    {
        if(numero < anterior && flag == true)
        {
            anterior ++;

            printf("%ld\n", anterior);
            
            flag = false;
        }

        anterior = numero;
    }
    
    if(flag == true)
    {
        printf("%ld\n", ++anterior);
    }
    
    return 0;
}
