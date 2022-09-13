#include <stdio.h>

int main()
{
	int N, time;

	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &time);

		if(time >= 2015)
		{
			time = time - 2015 + 1;

			printf("%d A.C.\n", time);
		}
		else
		{
			time = 2015 - time;

			printf("%d D.C.\n", time);

		}
	}

	return 0;
}
