#include <stdio.h>

int main()
{
	int N, a = 0, b = 1, c = 0;
	
	scanf("%d", &N);
	
	printf("%d %d ", a, b);
	
	for(int i = 0; i < (N - 2); i++)
	{
		c = a + b;
		
		a = b;
		b = c;
		
		printf("%d", c);
		
		if(i < (N - 3))
		{
			printf(" ");
		}
	}
	
	printf("\n");
	
	return 0;
}
