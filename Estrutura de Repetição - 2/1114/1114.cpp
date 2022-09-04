#include <stdio.h>

int main()
{
	int password, i = 0;
	
	while(i < 1)
	{
		scanf("%d", &password);
		
		if(password == 2002)
		{
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	
	printf("Acesso Permitido\n");
	
		return 0;
}
