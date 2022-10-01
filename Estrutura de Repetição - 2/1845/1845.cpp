#include <stdio.h>

int main()
{
    char letra, ultima;
    int troca[123] = {};

    troca[98] = 98; troca[106] = 106; troca[112] = 112; troca[115] = 115; troca[120] = 120; troca[122] = 122; troca[118] = 118;
    troca[66] = 66; troca[74] = 74; troca[80] = 80; troca[83] = 83; troca[86] = 86; troca[88] = 88; troca[90] = 90;

    while(scanf("%c", &letra) != EOF)
    {
        if(letra == troca[letra])
        {
            if(letra > 91)
            {
                letra = 102; 
            }
            else
            {
                letra = 70;
            }
        }

        if(!((ultima == 70 || ultima == 102) && (letra == 102 || letra == 70)))
        {
            printf("%c", letra);
        }

        ultima = letra;
    }

    return 0;
}
