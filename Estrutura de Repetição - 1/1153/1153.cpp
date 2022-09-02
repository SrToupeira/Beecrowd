#include <iostream>

using namespace std;

int main()
{
	int N, S;
	
	scanf("%d", &N);
	
		S = N * (N-1);
		
	for(int i = 0; i < N; i++)
	{
		N--;
		
		S = S * (N-1);
	}
	
	printf("%d\n",S);

	return 0;
}
