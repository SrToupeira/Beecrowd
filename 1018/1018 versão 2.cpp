#include <iostream>

using namespace std;

int main(){
	
	int valor, cem;
	
	cin >> valor;
	
	while(valor>=100){
		
		valor-=100;
		cem++;
	
		}
		
	cout << valor << endl;
	cout << cem << " nota(s) de R$ 100,00" << endl;
	
	return 0;
	}
