#include <stdio.h>

int main()
{
	float I = 0, J = 0;
	int A, B, f, g, h, i;
	
	for(f = 0; f < 2 ; f++)
	{
		A = I;
		B = J;
		
		for(g = 0; g < 3; g++)
		{
			B++;
			printf("I=%d J=%d\n", A, B);
		}
		
		for(h = 1; h < 5; h++)
		{
			I += 0.2;
			J += 0.2;
			
			for(i = 0; i < 3; i++)
			{
				J++;
				
				printf("I=%.1f J=%.1f\n", I, J);
			}
			
			J -= 3;
		}
		
		I += 0.2;
		J += 0.2;
	}
	
	I += 0.2;
	J += 0.2;

	A = I;
	B = J;
	
	for(g = 0; g < 3; g++)
	{
		B++;
		printf("I=%d J=%d\n", A, B);
	}
	
	return 0;
}
