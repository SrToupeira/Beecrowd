#include <iostream>

using namespace std;

int main()
{

	int A,B;
	
	scanf("%d %d",&A,&B);
	
	if(B%A==0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		if(B==0)
		{
			printf("Sao Multiplos\n");
		}
		else
		{
			printf("Nao sao Multiplos\n");
		}
	}

	return 0;
}
