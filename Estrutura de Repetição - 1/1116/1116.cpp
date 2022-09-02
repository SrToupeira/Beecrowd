#include <iostream>

using namespace std;

int main()
{

	float N, X, Y, div;
	
	scanf("%f", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%f %f", &X, &Y);
		
		if(Y == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			div = X / Y;
			
			printf("%.1f\n", div);
		}
	}

	return 0;
}
