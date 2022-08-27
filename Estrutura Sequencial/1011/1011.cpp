#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double pi = 3.14159, radius, volume;
	
	cin >> radius;
	
	volume = (4.0/3) * pi * radius * radius * radius;
	
	cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
	
	return 0;
	}
