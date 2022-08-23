#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int tempo, velocidade;
	double distancia, gasolina;
	
	cin >> tempo >> velocidade;
	
	distancia = tempo * velocidade;
	
	gasolina = distancia / 12;
	
	cout << fixed << setprecision(3) << gasolina << endl;
	
	return 0;
	}
