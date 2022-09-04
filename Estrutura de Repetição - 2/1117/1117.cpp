#include <stdio.h>

int main()
{

	float note = 0, average = 0;
	int i = 0, f = 0;
	
	for(i = 0; i < 2; i++)
	{
		while(f < 1)
		{
			scanf("%f", &note);
			
			if(note >= 0 && note <=10)
			{
				average += note;
				break;
			}
			else
			{
				printf("nota invalida\n");
			}	
		}
	}
	
	average = average / 2.0;
	
	printf("media = %.2f\n", average);

	return 0;
}
