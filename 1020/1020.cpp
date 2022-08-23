#include <iostream>

using namespace std;

int main(){
	
	int N, anos, meses, dias;
	
	cin >> N;
	
	anos = N/365;
	meses = (N % 365)/30;
	dias = (N % 365 % 30);
	
	cout << anos << " ano(s)" << "\n";
	cout << meses << " mes(es)" << "\n";
	cout << dias << " dia(s)" << endl;
	
	return 0;
	}
