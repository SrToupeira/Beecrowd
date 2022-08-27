#include <iostream>

using namespace std;

int main(){
	
	double valor;
	int cem=0, cinq=0, vint=0, dez=0, cinc=0, dois=0, um=0, ccinq=0, cvint=0, cdez=0, ccinc=0, umc=0;
	
	cin >> valor;
	
	valor=valor*100;
	
	while(valor>=10000){
		valor-=10000;
		cem+=1;
		}
		
	while(valor>=5000){
		valor -=5000;
		cinq+=1;
		}
		
	while(valor>=2000){
		valor-=2000;
		vint+=1;
		}
		
	while(valor>=1000){
		valor-=1000;
		dez+=1;
		}
		
	while(valor>=500){
		valor-=500;
		cinc+=1;
		}
		
	while(valor>=200){
		valor-=200;
		dois+=1;
		}
		
	while(valor>=100){
		valor-=100;
		um+=1;
		}
		
	while(valor>=50){
		valor-=50;
		ccinq+=1;
		}
		
	while(valor>=25){
		valor-=25;
		cvint+=1;
		}
		
	while(valor>=10){
		valor-=10;
		cdez+=1;
		}
		
	while(valor>=5){
		valor-=5;
		ccinc+=1;
		}
		
	while(valor>=1){
		valor-=1;
		umc+=1;
		}
	
	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinq << " nota(s) de R$ 50.00" << endl;
	cout << vint << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinc << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS: " << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	cout << ccinq << " moeda(s) de R$ 0.50" << endl;
	cout << cvint << " moeda(s) de R$ 0.25" << endl;
	cout << cdez << " moeda(s) de R$ 0.10" << endl;
	cout << ccinc << " moeda(s) de R$ 0.05" << endl;
	cout << umc << " moeda(s) de R$ 0.01" << endl;

	return 0;
	}
