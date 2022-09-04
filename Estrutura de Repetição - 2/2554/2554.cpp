#include <iostream>

using namespace std;

int main()
{
	bool flag;
	int dates_number, people;
	string date, event;
	char provision;
	
	scanf("%d %d", &dates_number, &people);
	
	flag = true;
	
	for(int i = 0; i < dates_number; i++)
	{
		cin >> date;
		
		for(int f = 0; f < people; f++)
		{
			
			scanf("%c", &provision);
			
			if(provision == '0')
			{
				flag = false;
			}
			else
			{
				flag = true;
				event = date;
			}
		}
	}

	if(flag == true)
	{
		cout << event << "\n";
	}
	else
	{
		printf("Pizza antes de FdI\n");
	}
	
	return 0;
}
