#include <stdio.h>

int main()
{
    int number;
    double X = 0, answer;
    
	scanf("%d", &number);
	
	if(number != 0)
	{
		X = 1.0 / 6;
	
		for(int i = 1; i < number; i++)
		{
			X = 1 / (X + 6);
		}
	}

	answer = 3 + X;

	printf("%.10lf\n", answer);

	return 0;
}
