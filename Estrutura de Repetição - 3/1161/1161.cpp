#include <stdio.h>

int main()
{
	int X, Y;
	long long int fat1, fat2, sum;

	while(scanf("%d %d", &X, &Y) != EOF)
	{
		fat1 = 0;
		fat2 = 0;
		sum = 0;
		
		if(X == 0)
		{
			fat1 = 1;
		}
		else
		{
			fat1 = X;
		}

		if(Y == 0)
		{
			fat2 = 1;
		}
		else
		{
		fat2 = Y;
		}

		while(X > 1)
		{
			X--;

			fat1 = fat1 * X;
		}

		while(Y > 1)
		{
			Y--;
			fat2 = fat2 * Y;
		}

		sum = fat1 + fat2;

		printf("%lld\n", sum);
	}

	return 0;
}

