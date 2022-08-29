#include <iostream>

using namespace std;

int main()
{

	int A,B,C;
		
	scanf("%d %d",&A,&B);
	
	C = (24-A)+B;
	
	if(C>24)
	{
		C-=24;
		printf("O JOGO DUROU %d HORA(S)\n",C);
	}
	else
	{
		printf("O JOGO DUROU %d HORA(S)\n",C);
	}
	
	return 0;
}
