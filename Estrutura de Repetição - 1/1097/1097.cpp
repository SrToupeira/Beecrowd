#include <iostream>

using namespace std;

int main()
{
	int i = 0, I = 1, J = 8;
	
	for(int f = 0; f<5; f++)
	{
		for(i = 0; i < 3; i++)
		{
			J--;
			
			printf("I=%d J=%d\n",I,J);
		}
		I += 2;
		J += 5;
		i = 0;
	}

	return 0;
}
