#include <stdio.h>

int main()
{
	int N, number;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &number);
		
		if(number == 0)
		{
			printf("NULL\n");
		}
		else
		{
			if(number % 2 == 0)
			{
				printf("EVEN ");
			}
			else
			{
				printf("ODD ");
			}
		}
		
		if(number > 0)
		{
			printf("POSITIVE\n");
		}
		else
		{
			if(number < 0)
			{
				printf("NEGATIVE\n");
			}
		}
	}

	return 0;
}
