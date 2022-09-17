#include <stdio.h>

int main()
{
	int N[20], numero, f = 0;

	for(int i = 0; i < 20; i++)
	{
		scanf("%d", &numero);

		N[i] = numero;
	}

	for(int i = 19; i > -1; i--)
	{
		printf("N[%d] = %d\n", f, N[i]);
		f++;
	}

	return 0;
}
