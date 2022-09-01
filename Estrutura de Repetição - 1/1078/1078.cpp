#include <iostream>

using namespace std;

int main()
{

	int N, mult;
	
	scanf("%d", &N);
	
	for(int i = 1; i < 11; i++)
	{
		mult = i * N;
		
		printf("%d x %d = %d\n", i, N, mult);
	}
	
	return 0;
}
