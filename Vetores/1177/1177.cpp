#include <stdio.h> 

int main()
{
	int T, N[1000];
	
	scanf("%d", &T);

	N[0] = T;

	for(int i = 0; i < 1000; i++)
	{
		if(N[i] > T - 1)
		{
			N[i] -= N[i];
		}

		printf("N[%d] = %d\n", i, N[i]);

		N[i + 1] = N[i] + 1;
	}

	return 0;
}
