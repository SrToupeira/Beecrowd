#include <stdio.h>

int main()
{
	int N, number1, number2, sum;

	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d %d", &number1, &number2);

		sum = number1 + number2;

		switch(sum)
		{
			case 0:
				printf("PROXYCITY\n");
				break;
			case 1:
				printf("P.Y.N.G.\n");
				break;
			case 2:
				printf("DNSUEY!\n");
				break;
			case 3:
				printf("SERVERS\n");
				break;
			case 4:
				printf("HOST!\n");
				break;
			case 5:
				printf("CRIPTONIZE\n");
				break;
			case 6:
				printf("OFFLINE DAY\n");
				break;
			case 7:
				printf("SALT\n");
				break;
			case 8:
				printf("ANSWER!\n");
				break;
			case 9:
				printf("RAR?\n");
				break;
			case 10:
				printf("WIFI ANTENNAS\n");
				break;
		}
	}

	return 0;
}
