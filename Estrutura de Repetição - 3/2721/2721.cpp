#include <stdio.h>

int main()
{
	int snowballs, sum = 0, x = 0;

	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &snowballs);

		sum += snowballs;
	}
	
	while(sum >= 1)
	{
		x = 0;

		for(int f = 0; f < 9; f++)
		{
			sum--;
			x++;

			if(sum == 0)
			{
				break;
			}
		}
	}
	
	switch(x)
	{
		case 1:
			printf("Dasher\n");
			break;
		case 2:
			printf("Dancer\n");
			break;
		case 3:
			printf("Prancer\n");
			break;
		case 4:
			printf("Vixen\n");
			break;
		case 5:
			printf("Comet\n");
			break;
		case 6:
			printf("Cupid\n");
			break;
		case 7:
			printf("Donner\n");
			break;
		case 8:
			printf("Blitzen\n");
			break;
		case 9:
			printf("Rudolph\n");
			break;
	}

	return 0;
}
