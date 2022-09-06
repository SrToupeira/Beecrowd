#include <iostream>

using namespace std;

int main()
{
	int datas_consideradas, pessoas, decisao;
	string data, evento;
	bool flag;
	
	while(scanf("%d %d", &pessoas, &datas_consideradas) != EOF)
	{	
		evento = "vazio";
		
			for(int f = 0; f < datas_consideradas; f++)
			{
				cin >> data;
				
				flag = true;
				
				for(int h = 0; h < pessoas; h++)
				{
					cin >> decisao;
					
					if(decisao == 0)
					{
						flag = false;
					}			
				}
				
				if(flag == true && evento == "vazio")
				{
					evento = data;
				}

			}
			
			if(evento != "vazio")
			{
				cout << evento << "\n";
			}
			else
			{
				printf("Pizza antes de FdI\n");
			}		
	}
	
	return 0;
}
