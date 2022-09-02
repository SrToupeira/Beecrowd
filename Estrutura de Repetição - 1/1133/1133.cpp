#include <iostream>

using namespace std;

int main()
{
	int X, Y;
	
	scanf("%d %d", &X, &Y);
	
	while(X < Y && Y - X != 1)
	{
		X++;
		
		if(X % 5 == 2 || X % 5 == 3)
		{
			printf("%d\n",X);
		}
	}

	return 0;
}
