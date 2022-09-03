#include <iostream>

using namespace std;

int main()
{
	int number, factorial;
	
	scanf("%d", &number);

	factorial = number * (number - 1);
	
	for(int i = (number - 2); i > 1; i--)
	{	
		factorial = factorial * i;
	}
	
	printf("%d\n", factorial);

	return 0;
}
