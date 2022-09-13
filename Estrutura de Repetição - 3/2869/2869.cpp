#include <stdio.h>

int main()
{
	int ciclos, N, X , Y, J;

	scanf("%d", &ciclos);

	for(int i = 0; i < ciclos; i++)
	{
		scanf("%d", &N);
		X = 0;
		Y = 1;

		while(true)
		{
			J = 2;
			Y = 2;
			X++;

			while(Y <= X/2)
			{
				if(X % Y == 0)
				{
					Y++;
					J++;
				}
				else
				{
					Y++;
				}
			}
			if(J == N)
			{
				break;
			}
		}

		printf("%d\n", X);
	}

	return 0;
}
