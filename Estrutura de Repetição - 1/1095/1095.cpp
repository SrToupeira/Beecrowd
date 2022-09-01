#include <iostream>

using namespace std;

int main()
{
	int I = 1, J = 60;
	
	do
	{
		printf("I=%d J=%d\n", I, J);
		
		I += 3;
		J -= 5;
	}
	while(J >= 0);

	return 0;
}
