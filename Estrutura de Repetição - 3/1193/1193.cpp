#include <stdio.h>

int main()
{
    int N, numero;
    
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        int binario = 0, produto = 1, resto;

        scanf("%d %s", &numero, &tipo);

        if(tipo == "dec")
        {
            //conversor de decimal para binario;

            int binario = 0, produto = 1, resto;

            while(numero != 0)
            {
                resto = numero % 2;
                binario = binario + (resto * produto);
                numero = numero / 2;
                produto *= 10;
            }

            //conversor de binario para hexadecimal;


    }

    return 0;
}
