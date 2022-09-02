#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, square, cube;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
	{
		square = pow(i,2);
		cube = pow(i,3);
		
		printf("%d %d %d\n", i, square, cube);
	}

	return 0;
}
