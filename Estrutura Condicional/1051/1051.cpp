#include <iostream>

using namespace std;

int main()
{

	float salario,IR;
	
	scanf("%f",&salario);
	
	if(salario >= 0 && salario <= 2000)
	{
		printf("Isento\n");
	}
	else
	{
		if(salario > 2000 && salario <=3000)
		{
		IR = (salario - 2000)*0.08;
		
		printf("R$ %.2f\n",IR);
		}
		else
		{
			if(salario > 3000 && salario <= 4500)
			{
				IR = 80 + ((salario - 3000)*0.18);
				printf("R$ %.2f\n",IR);
			}
			else
			{
				if(salario > 4500)
				{
					IR = 350 + ((salario - 4500)*0.28);
					printf("R$ %.2f\n",IR);
				}
			}
		}
	}

	return 0;
}
