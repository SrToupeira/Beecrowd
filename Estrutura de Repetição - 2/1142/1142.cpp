#include <stdio.h>

int main()
{
	int N, number = 0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		for(int f = 0; f < 3; f++)
		{
			number++;
			
			printf("%d ", number);
		}
		
		printf("PUM\n");
		
		number ++;
	}
	
	return 0;
}
