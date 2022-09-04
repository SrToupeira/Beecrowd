#include <iostream>

using namespace std;

int main()
{
	int N, number1, number2;
	string player1, player2, choice1, choice2;

	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		cin >> player1 >> choice1 >> player2 >> choice2;
		scanf("%d %d", &number1, &number2);
			
		if(choice1 == "PAR")
		{
			if((number1 + number2) % 2 == 0)
			{
				cout << player1 << "\n";
			}
			else
			{
				cout << player2 << "\n";
			}
		}
		else
		{
			if(choice1 == "IMPAR")
			{
				if((number1 + number2) % 2 == 0)
				{
					cout << player2 << "\n";
				}
				else
				{
					cout << player1 << "\n";
				}
			}
		}
	}
	
	return 0;
}
