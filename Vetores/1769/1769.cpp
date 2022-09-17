#include <stdio.h>

int main()
{
    char cpf[14];

    while(scanf("%s", cpf) != EOF)
    {
        int resto = 0, resto1 = 0, soma = 0, soma1 = 0;
        int f = 0, prod = 1, b[2];

        for(int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 3; i++)
            {
                soma += (cpf[f] - '0') * prod;
                prod++;
                f++;
            }
            f++;
        }

        f = 10; prod = 1;

        for(int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 3; i++)
            {
                soma1 += (cpf[f] - '0') * prod;
                prod++;
                f--;
            }
            f--;
        }
        
        b[0] = cpf[12] - '0';
        b[1] = cpf[13] - '0';

        resto = soma % 11;
        resto1 = soma1 % 11;

        if(resto == 10) resto = 0;
        if(resto1 == 10) resto1 = 0;
        
        if(b[0] == resto && b[1] == resto1)
        {
            printf("CPF valido\n");
        }
        else printf("CPF invalido\n");
    }
    return 0;
}
