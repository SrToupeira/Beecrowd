#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double A, B, C, TRIAN, CIRC, TRAPE, QUADRA, RETAN, PI = 3.14159;
	
	cin >> A >> B >> C;
	
	TRIAN = (A * C)/2;
	CIRC = PI * C * C;
	TRAPE = ((A + B) * C)/2;
	QUADRA = B * B;
	RETAN = A * B;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << TRIAN << endl;
	cout << "CIRCULO: " << CIRC << endl;
	cout << "TRAPEZIO: " << TRAPE << endl;
	cout << "QUADRADO: " << QUADRA << endl;
	cout << "RETANGULO: " << RETAN << endl;
	
	return 0;
	}
