#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int codigo1, numero1, codigo2, numero2;
	double valor1, valor2, total;
	
	cin >> codigo1 >> numero1 >> valor1;
	cin >> codigo2 >> numero2 >> valor2;
	
	total = (numero1 * valor1) + (numero2 * valor2);
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
	
	return 0;
	}
