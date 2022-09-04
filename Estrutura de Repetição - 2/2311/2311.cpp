#include <stdio.h>

int main()
{

	int N;
	float difficulty, note, sum = 0, greater = 0, lower = 10;
	char name[20];
	
	scanf("%d", &N);
	
	for(int f = 0; f < N; f++)
	{
		scanf("%s %f", name, &difficulty);
		
		for(int i = 0; i < 7; i++)
		{
			scanf("%f", &note);
			
			sum += note;
			
			if(note > greater)
			{
				greater = note;
			}
		
			if(note < lower)
			{
				lower = note;
			}
		}
		
		sum = sum - greater - lower;
		
		sum = sum * difficulty;
		
		printf("%s %.2f\n", name, sum);
		
		sum = 0;
		greater = 0;
		lower = 10;
	}

	return 0;
}
