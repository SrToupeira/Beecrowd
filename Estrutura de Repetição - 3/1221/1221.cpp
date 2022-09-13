#include <stdio.h>
#include <cmath>

int main()
{
	int N, number, x;
	bool flag;

	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &number);
		
		flag = true;
		x = sqrt(number);
		
		if(number % 2 == 0 && number != 2)
		{
			printf("Not Prime\n");
		}
		else
		{
			while(x > 1)
			{
				if(number % x == 0)
				{
					flag = false;
					break;
				}
				else
				{
					x--;
				}
			}

			if(flag == true)
			{
				printf("Prime\n");
			}
			else
			{
				printf("Not Prime\n");
			}
		}
	}
	return 0;
}
