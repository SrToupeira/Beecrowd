#include <iostream>

using namespace std;

int main()
{
	
	float N1,N2,N3,N4,M,exam,M2;
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	M=(N1*2 + N2*3 + N3*4 + N4)/10.0;
	
	printf("Media: %.1f\n", M);
	
	if(M >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		if(M < 5.0)
		{
			printf("Aluno reprovado.\n");
		}
		else
		{
			printf("Aluno em exame.\n");
			scanf("%f", &exam);
			printf("Nota do exame: %.1f\n",exam);
			M2=(M + exam)/2.0;
			
			if(M2 >= 5.0)
			{
				printf("Aluno aprovado.\nMedia final: %.1f\n", M2);
			}
			else
			{
				printf("Aluno reprovado.\nMedia final: %.1f\n", M2);
			}
		}
	}
	return 0;
}
