#include <stdio.h>

int main()
{
	int N, registration, position;
	float note = 0, greater = 0;

	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d %f", &registration, &note);
		
		if(note > greater)
		{
			greater = note;
			position = registration;
		}	
	}
	
	if(greater >= 8)
	{
		printf("%d\n", position);
	}
	else
	{
		printf("Minimum note not reached\n");
	}
	
	return 0;
}
