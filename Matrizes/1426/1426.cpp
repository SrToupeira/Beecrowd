#include <stdio.h>

int main()
{
	int casos;

	scanf("%d", &casos);

	for(int i = 0; i < casos; i++)
	{
		int matriz[9][9] = {};

		for(int f = 0; f < 9; f+=2)
		{
			for(int j = 0; j <= f; j+=2)
			{
				scanf("%d", &matriz[f][j]);
			}
		}

		for(int f = 2; f < 9; f+=2)
		{
			for(int j = 1; j < f; j+=2)
			{
				matriz[f][j] = (matriz[f-2][j-1] - (matriz[f][j-1] + matriz[f][j+1]))/2;

				matriz[f-1][j-1] = matriz[f][j-1] + matriz[f][j];
				matriz[f-1][j] = matriz[f][j] + matriz[f][j+1];
			}
		}

		for(int f = 0; f < 9; f++)
		{
			for(int j = 0; j < f+1; j++)
			{
				if(j != 0) printf(" ");

				printf("%d", matriz[f][j]);
			}
			printf("\n");
		}
	}

  return 0;
}
