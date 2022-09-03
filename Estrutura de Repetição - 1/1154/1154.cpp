#include <stdio.h>

int main()
{
	int age, i = 0, n = 0; 
	float average = 0;
	
	while(i < 1)
	{
		scanf("%d", &age);
		if(age >= 0)
		{
			average += age;
			n++;
		}
		else
		{
			if(age < 0)
			{
				break;
			}
		}	
	}
	
	average = average / n;
	
	printf("%.2f\n", average);
	
	return 0;
}
