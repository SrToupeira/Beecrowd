#include <iostream>

using namespace std;

int main()
{
	int number, n=0, square;
	
	scanf("%d", &number);
	
	while(n < number && number - n != 1)
	{
		n+=2;
		
		square = n * n;
		
		printf("%d^2 = %d\n", n, square);
	}
	
	
	return 0;
}
