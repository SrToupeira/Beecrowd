#include <stdio.h>

int main()
{
	int casos, T;
	unsigned long int N[60];
	
	N[0] = 0; N[1] = 1;

	for(int i = 2; i < 60; i++)
	{
		N[i] = N[i-2] + N[i-1];
	}
	
	scanf("%d", &casos);

	for(int i = 0; i < casos; i++)
	{
		scanf("%d", &T);

		printf("Fib(%d) = %ld\n", T, N[T]);
	}

	return 0;
}
