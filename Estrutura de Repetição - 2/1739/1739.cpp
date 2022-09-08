#include <stdio.h>

int main()
{
	long long int N, first = 1, second = 1, third, threebonacci, aux;
	
	while(scanf("%lld", &N) != EOF)
	{	
		threebonacci = 0;
		
		for(int i = 0; i < N; i++)
		{
			
			while(threebonacci == 0)
			{
				third = first + second;
				
				first = second;
				
				second = third;
		
				if(third % 3 == 0)
				{
					threebonacci = third;
					break;
				}
				else
				{
					aux = third;
					
					while(aux > 3)
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
		}
		
		printf("%lld\n", threebonacci);
	}
	
	return 0;
}
