#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    string lines[4];

    //ler a matriz que corresponde a mensagem codificada;
    for(int i = 0; i < 4; i++)
    {
        //como nao é informado a quantidade de colunas a matriz sera formada por
        //um vetor de string
        cin >> lines[i]; 
    }

    //numero de colunas
    n = lines[0].size(); 
    
    int num[n];
    string numero[n];
    char mensagem[n];

    //ler cada colunas como um numero de quatro digitos
    for(int c = 0; c < n; c++)
    {
        for(int l = 0; l < 4; l++)
        {
            numero[c] = numero[c] + lines[l][c];
        }
        //conversao do numero de quantro digitos para inteiro
        num[c] = stoi(numero[c]);
    }

    //decodificacao da mensagem
    for(int i = 1; i < n - 1; i++)
    {
        mensagem[i] = ((num[0] * num[i] + num[n-1]) % 257);

        printf("%c", mensagem[i]);
    }
    printf("\n");
    return 0;
}
