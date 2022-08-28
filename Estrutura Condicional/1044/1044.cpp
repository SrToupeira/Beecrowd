#include <iostream>

using namespace std;

int main()
{

	int A,B;
	
	scanf("%d %d",&A,&B);
	
	if(B%A==0)
	{
		printf("Sao multiplos\n");
	}
	else
	{
		if(B==0)
		{
			printf("Sao multiplos\n");
		}
		else
		{
			printf("Nao sao multiplos\n");
		}
	}

	return 0;
}
