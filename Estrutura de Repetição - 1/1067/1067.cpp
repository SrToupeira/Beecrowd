#include <iostream>

using namespace std;

int main()
{
	int number, n=1;
	
	scanf("%d", &number);
	
	
	printf("%d\n", n);
	
	while(n < number && number - n > 1)
	{
		n+=2;
		
		printf("%d\n",n);
	}

	return 0;
}
