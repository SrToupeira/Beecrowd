#include <stdio.h>

int main()
{
    int horas, minutos;

    while(scanf("%d:%d", &horas, &minutos) != EOF)
    {
        bool h8 = false, h4 = false, h2 = false, h1 = false, m32 = false, m16 = false, m8 = false, m4 = false, m2 = false, m1 = false;

        //contador de horas
        if(horas >= 8)
        {
            h8 = true;
            horas = horas - 8;
        }
        if(horas >= 4)
        {
            h4 = true;
            horas = horas - 4;
        }
        if(horas >= 2)
        {
            h2 = true;
            horas = horas - 2;
        }
        if(horas >= 1)
        {
            h1 = true;
            horas = horas - 1;
        }

        //contador de minutos
        if(minutos >= 32)
        {
            m32 = true;
            minutos = minutos - 32;
        }
        if(minutos >= 16)
        {
            m16 = true;
            minutos = minutos - 16;
        }
        if(minutos >= 8)
        {
            m8 = true;
            minutos = minutos - 8;
        }
        if(minutos >= 4)
        {
            m4 = true;
            minutos = minutos - 4;
        }
        if(minutos >= 2)
        {
            m2 = true;
            minutos = minutos - 2;
        }
        if(minutos >= 1)
        {
            m1 = true;
            minutos = minutos - 1;
        }

        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("|    ____________________________________    |_\n");
        printf("|   |                                    |   |_)\n");
        printf("|   |   8         4         2         1  |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   ");
        (h8 == true) ? printf("o") : printf(" ");
        printf("         ");
        (h4 == true) ? printf("o") : printf(" ");
        printf("         ");
        (h2 == true) ? printf("o") : printf(" ");
        printf("         ");
        (h1 == true) ? printf("o") : printf(" ");
        printf("  |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   ");
        (m32 == true) ? printf("o") : printf(" ");
        printf("     ");
        (m16 == true) ? printf("o") : printf(" ");
        printf("     ");
        (m8 == true) ? printf("o") : printf(" ");
        printf("     ");
        (m4 == true) ? printf("o") : printf(" ");
        printf("     ");
        (m2 == true) ? printf("o") : printf(" ");
        printf("     ");
        (m1 == true) ? printf("o") : printf(" ");
        printf("  |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   32    16    8     4     2     1  |   |_\n");
        printf("|   |____________________________________|   |_)\n");
        printf("|                                            |\n");
        printf("|____________________________________________|\n");
        printf("\n");
    }

    return 0;
}
