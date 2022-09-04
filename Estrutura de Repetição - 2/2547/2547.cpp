#include <stdio.h>

int main()
{
	int N, greater, lower, height, number;
	
	while(scanf("%d %d %d", &N, &lower, &greater) != EOF)
	{
		number = 0;
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &height);
			
			if(height >= lower && height <= greater)
			{
				number++;
			}	
		}  
		
		printf("%d\n", number);
		
	}
	
	return 0;
}
