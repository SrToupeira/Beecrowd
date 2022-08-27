#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double A, B, C, pesoA = 2, pesoB = 3, pesoC = 5, MEDIA;
	
	cin >> A >> B >> C;
	
	MEDIA = (A*pesoA + B*pesoB + C*pesoC)/(pesoA + pesoB + pesoC);
	
	cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
	
	return 0;
	}
