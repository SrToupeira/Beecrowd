#include <stdio.h>

int main()
{
	int number, greater = 0, position;
	
	for(int i = 1; i < 101; i++)
	{
		scanf("%d", &number);
		
		if(number > greater)
		{
			greater = number;
			position = i;
		}
	}
	
	printf("%d\n%d\n", greater, position);

	return 0;
}
