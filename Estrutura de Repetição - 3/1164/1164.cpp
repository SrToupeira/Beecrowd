#include <stdio.h>

int main()
{
	long long int N, number, sum, X;
	
	scanf("%lld", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%lld", &number);
		
		sum = 0;
		X=0;

		X = number/2;

		while(X >= 1)
		{
			if(number % X == 0)
			{
				sum += X;
				X--;
			}
			else
			{
				X--;
			}
		}

		if(sum == number)
		{
			printf("%lld eh perfeito\n", number);
		}
		else
		{
			printf("%lld nao eh perfeito\n", number);
		}
	}

	return 0;
}
