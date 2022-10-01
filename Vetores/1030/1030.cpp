#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
    int casos, quantos, salto;

    scanf("%d", &casos);

    for(int c = 1; c <= casos; c++)
    {
        scanf("%d %d", &quantos, &salto);

        queue <int> fila;

        for(int i = 1; i <= quantos; i++)
        {
            fila.push(i);
        }

        while(fila.size() != 1)
        {
            for(int i = 0; i < salto - 1; i++)
            {
                int aux;
                aux = fila.front();
                fila.pop();
                fila.push(aux);
            }

            fila.pop();
        }

        printf("Case %d: %d\n", c, fila.front());
    }

    return 0;
}
