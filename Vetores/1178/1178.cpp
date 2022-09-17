#include <stdio.h>

int main()
{
	double N[101];

	scanf("%lf", &N[0]);
	
	for(int i = 0; i < 100; i++)
	{
		printf("N[%d] = %.4lf\n", i, N[i]);

		N[i+1] = N[i] / 2.0;
	}

	return 0;
}
