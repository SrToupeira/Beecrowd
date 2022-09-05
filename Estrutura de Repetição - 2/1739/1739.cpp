#include <stdio.h>

int main()
{
	int N, first = 1, second = 1, third, threebonacci, aux;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		while(true)
		{
			third = first + second;
			
			first = second;
			
			second = third;
	
			if(third % 3 == 0)
			{
				threebonacci = third;
				break;
			}
			
			aux = third;
			
			while(aux > 0)
			{
				if(aux % 10 == 3 || aux / 10 == 3)
				{
					threebonacci = third;
					break;
				}
				else
				{
					aux = aux / 10;
				}
			}
				
		}
	}
	
	printf("%d", threebonacci);
	
	return 0;
}
