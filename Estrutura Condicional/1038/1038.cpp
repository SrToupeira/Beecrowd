#include <iostream>

using namespace std;

int main(){
	
	int item,qnt;
	double total;
	
	scanf("%d %d",&item,&qnt);
	
	switch(item){
		
		case 1:
			total=qnt*4;
			break;
		case 2:
			total=qnt*4.5;
			break;
		case 3:
			total=qnt*5;
			break;
		case 4:
			total=qnt*2;
			break;
		case 5:
			total=qnt*1.5;
			break;
		}
		
		printf("Total: R$ %.2lf\n",total);
	
	return 0;
	}
