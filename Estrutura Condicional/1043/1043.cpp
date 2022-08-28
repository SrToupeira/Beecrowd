#include <iostream>

using namespace std;

int main()
{

	float a, b, c, p, ar;
	
	scanf("%f %f %f",&a,&b,&c);
	
	p = a + b + c;
	
	ar = ((a + b)*c)/2;
	
	if(abs(b - c) < a && a < b + c)
	{
		printf("Perimetro = %.1f\n",p);
	}
	else
	{
		if(abs(a - c) < b && b < a + c)
		{
			printf("Perimetro = %.1f\n",p);
		}
		else
		{
			if(abs(a - b) < c && c < a + b)
			{
				printf("Perimetro = %.1f\n",p);
			}
			else
			{
				printf("Area = %.1f\n",ar);
			}
		}
	}
		
	return 0;
}
