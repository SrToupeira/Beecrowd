#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int numero, horas;
	double valor;
	
	cin >> numero >> horas >> valor;
	
	cout << "NUMBER = " << numero << endl << "SALARY = U$ " << fixed << setprecision(2) << (valor * horas) << endl;
	
	return 0;
	}
