#include <iostream>
using namespace std;

int main()
{
    int casos;
    bool flag = true;
    string paisagem, paisagem_anterior;

    scanf("%d", &casos);

    int N[casos];

    scanf("%d", &N[0]);

    for(int i = 1; i < casos; i++)
    {
        scanf("%d", &N[i]);

        if(N[i] > N[i-1])
        {
            paisagem = "pico";

            if(paisagem == paisagem_anterior) flag = false;
        }
        else
        {
            if(N[i] < N[i-1])
            {
                paisagem = "vale";

                if(paisagem == paisagem_anterior) flag = false;
            }
            else flag = false;
        }
        paisagem_anterior = paisagem;
    }

    flag == (true) ? printf("1\n") : printf("0\n");

    return 0;
}
