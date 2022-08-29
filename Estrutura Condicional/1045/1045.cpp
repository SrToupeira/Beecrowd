#include <iostream>

using namespace std;

int main()
{

	float A,B,C,lA,lB,lC;
	
	scanf("%f %f %f",&A,&B,&C);
	
	if(A>B && B>C)
	{
		lA = A;
		lB = B;
		lC = C;
	}
	else
	{
		if(A>C && C>B)
		{
			lA = A;
			lB = C;
			lC = B;
		}
		else
		{
			if(B>A && A>C)
			{
				lA = B;
				lB = A;
				lC = C;
			}
			else
			{
				if(B>C && C>A)
				{
					lA = B;
					lB = C;
					lC = A;
				}
				else
				{
					if(C>B && B>A)
					{
						lA = C;
						lB = B;
						lC = A;
					}
					else
					{
						lA = C;
						lB = A;
						lC = B;
					}
				}
			}
		}
	}
	
	if(lA >= lB + lC)
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
		if(lA*lA == lB*lB + lC*lC)
		{
			printf("TRIANGULO RETANGULO\n");
		}
		if(lA*lA > lB*lB + lC*lC)
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(lA*lA < lB*lB + lC*lC)
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(lA == lB && lB == lC)
		{
			printf("TRIANGULO EQUILATERO\n");
		}
		if(lA == lB && lB != lC)
		{
			printf("TRIANGULO ISOSCELES\n");
		}
		if(lA != lB && lB == lC)
		{
			printf("TRIANGULO ISOSCELES\n");
		}
		
	}

	return 0;
}
