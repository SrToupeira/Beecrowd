#include <iostream>

int main()
{
	float nota, average;
	char option;
	
inicio:

		average = 0;

		for(int i = 0; i < 2; i++)
		{
			scanf("%f", &nota);

			if(nota >= 0 && nota <= 10)
			{
				average += nota;
			}
			else
			{
				printf("nota invalida\n");
				i--;
			}
		}

		average = average / 2.0;

		printf("media = %.2f\n", average);
		
reopcao:

		printf("novo calculo (1-sim 2-nao)\n");

		scanf(" %c", &option);
		
		if(option == '1')
		{
			goto inicio;
		}
		else
		{
			if(option == '2')
			{
			}
			else
			{
				goto reopcao;
			}
		}
	return 0;
}
