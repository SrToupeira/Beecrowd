#include <stdio.h>

int main()
{
	int month, days, s;
	
	while(scanf("%d %d", &month, &days) != EOF)
	{
		s = 0;
		
		switch(month)
		{
			case 1:
				break;
			case 2:
				s += 31;
				break;
			case 3:
				s+= 60;
				break;
			case 4:
				s += 91;
				break;
			case 5:
				s += 121;
				break;
			case 6:
				s += 152;
				break;
			case 7:
				s += 182;
				break;
			case 8:
				s += 213;
				break;
			case 9:
				s += 244;
				break;
			case 10:
				s += 274;
				break;
			case 11:
				s += 305;
				break;
			case 12:
				s += 335;
				break;
		}
		
		s = 360 - (s + days);
		
		if(s == 0)
		{
			printf("E natal!\n");
		}
		else
		{
			if(s == 1)
			{
				printf("E vespera de natal!\n");
			}
			else
			{
				if(s < 0)
				{
					printf("Ja passou!\n");
				}
				else
				{
					printf("Faltam %d dias para o natal!\n", s);
				}
			}
		}
	}

	return 0;
}
