#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double notaA, notaB, pesoA = 3.5, pesoB = 7.5, M;
	
	cin >> notaA >> notaB;
	
	M = (notaA * pesoA + notaB * pesoB)/(pesoA + pesoB);
	
	cout << "MEDIA = " << fixed << setprecision(5) << M << endl;
	
	
	return 0;
	}
