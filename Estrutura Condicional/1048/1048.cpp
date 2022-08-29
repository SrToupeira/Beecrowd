#include <iostream>

using namespace std;

int main()
{

	float s0,s1,r;

	scanf("%f",&s0);
	
	if(s0>= 0 && s0 <= 400.00)
	{
		s1 = s0 * 1.15;
		r = s1 - s0;
		
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",s1,r);

	}
	else
	{
		if(s0>400.00 && s0<=800.00)
		{
			
			s1 = s0 * 1.12;
			r = s1 - s0;
		
			printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",s1,r);
		}
		else
		{
			if(s0>800.00 && s0<=1200.00)
			{
				s1 = s0 * 1.1;
				r = s1 - s0;
		
				printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",s1,r);
			}
			else
			{
				if(s0>1200.00 && s0<=2000.00)
				{
					s1 = s0 * 1.07;
					r = s1 - s0;
		
					printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",s1,r);
				}
				else
				{
					if(s0>2000.00)
					{
						s1 = s0 * 1.04;
						r = s1 -s0;
						
						printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",s1,r);
						
					}
				}
			}
		}
	}

	return 0;
}
