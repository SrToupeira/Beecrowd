#include <stdio.h>

int main()
{
	//N1 significa numero 1 e o mesmo significa para N2;
	int N1, N2, resto;
	
	while(scanf("%d %d", &N1, &N2) != EOF)
	{
		if(N1 == 0 && N2 == 0) break;

		while(N1 > 9)
		{
			resto = 0;

			while(N1 > 9)
			{
				resto += N1 % 10;
				N1 = N1 / 10;
			}
			N1 += resto;
		}
		printf("%d\n", N1);
		while(N2 > 9)
		{
			resto = 0;

			while(N2 > 9)
			{
				resto += N2 % 10;
				N2 = N2 / 10;
			}
			N2 += resto;
		}
		printf("%d\n", N2);
		if(N1 > N2)
		{
			printf("1\n");
		}
		else
		{
			if(N1 < N2)
			{
				printf("2\n");
			}
			else
			{
				if(N1 == N2)
				{
					printf("0\n");
				}
			}
		}
	}

	return 0;
}
