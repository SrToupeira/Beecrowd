#include <stdio.h>

int main()
{
	int N, city_A, city_B; 
	double rate_A, rate_B;
	
	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d %d %lf %lf", &city_A, &city_B, &rate_A, &rate_B);
		
		int anos = 0;

		for(anos = 0; city_A <= city_B; anos++)
		{
			city_A = int(city_A * (1 + rate_A/100));

			city_B = int(city_B *(1 + rate_B/100));
			
			if(anos > 100)
			{
				break;
			}
		}
		
		if(anos > 100)
		{
			printf("Mais de 1 seculo.\n");
		}
		else
		{
			printf("%d anos.\n", anos);
		}
	}

 return 0;
}
