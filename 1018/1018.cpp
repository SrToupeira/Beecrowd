#include <iostream>

using namespace std;

int main(){
	
	int N, cem, cinquenta, vinte, dez, cinco, dois, um;
	
	cin >> N;
	
	cem = N/100;
	cinquenta = (N % 100)/50;
	vinte = (N % 100 % 50)/20;
	dez = (N % 100 % 50 % 20)/10;
	cinco = (N % 100 % 50 % 20 % 10)/5;
	dois = (N % 100 % 50 % 20 % 10 % 5)/2;
	um = (N % 100 % 50 % 20 % 10 % 5 % 2)/1;
	
	cout << N << endl;
	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;
	
	return 0;
	}
