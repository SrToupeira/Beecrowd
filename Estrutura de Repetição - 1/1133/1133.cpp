#include <iostream>

using namespace std;

int main()
{
	int X, Y, Maior, Menor;
	
	scanf("%d %d", &X, &Y);
	
	if(X > Y)
	{
		Maior = X;
		Menor = Y;
	}
	else
	{
		if(Y > X)
		{
			Maior = Y;
			Menor = X;
		}
	}
	
	while(Menor < Maior && Maior - Menor > 1)
	{
		Menor++;
		
		if(Menor % 5 == 2 || Menor % 5 == 3)
		{
			printf("%d\n", Menor);
		}
	}

	return 0;
}
