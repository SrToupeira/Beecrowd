#include <iostream>

using namespace std;

int main()
{
	int X, Y, n = 0;
	
	scanf("%d %d", &X ,&Y);
	
	for(int i = 1; i <= Y; i++)
	{
		printf("%d", i);
		
		n++;
		
		if(n < 3)
		{
			printf(" ");
		}
		
		if(n >= X)
		{
			printf("\n");
			
			n = 0;
		}
	}

	return 0;
}
