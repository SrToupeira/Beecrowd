#include <iostream>

using namespace std;

int main()
{
	string osso,tipo,dieta;
	
	cin >> osso >> tipo >> dieta;
	
	if(osso == "vertebrado")
	{
		if(tipo == "ave")
		{
			if(dieta == "carnivoro")
			{
				printf("aguia\n");
			}
			else
			{
				printf("pomba\n");
			}
		}
		else
		{
			if(dieta == "onivoro")
			{
				printf("homem\n");
			}
			else
			{
				printf("vaca\n");
			}
		}
	}
	else
	{
		if(tipo == "inseto")
		{
			if(dieta == "hematofago")
			{
				printf("pulga\n");
			}
			else
			{
				printf("lagarta\n");
			}
		}
		else
		{
			if(dieta == "hematofago")
			{
				printf("sanguessuga\n");
			}
			else
			{
				printf("minhoca\n");
			}
		}
	}

	return 0;
}
