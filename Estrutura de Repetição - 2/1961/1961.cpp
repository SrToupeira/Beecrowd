#include <stdio.h>
#include <cmath>

int main()
{
	bool flag;
	int jump, pipes, height, A;
	
	scanf("%d %d", &jump, &pipes);

		scanf("%d", &height);
		
		A = height;
		
		for(int i = 1; i < pipes; i++)
		{
			scanf("%d", &height);
			
			if(abs(A - height) <= jump)
			{
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
			
			A = height;
		}	
	
	if(flag ==  true)
	{
		printf("YOU WIN\n");
	}
	else
	{
		printf("GAME OVER\n");
	}

	return 0;
}
