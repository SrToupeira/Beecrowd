#include <iostream>

int main()
{
	int N, bonus, D_attack, D_defence, D_level, G_attack, G_defence, G_level, D_bonus, G_bonus;
	float D_value, G_value;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		D_bonus = 0;
		G_bonus = 0;
		
		scanf("%d", &bonus);
		scanf("%d %d %d", &D_attack, &D_defence, &D_level);
		scanf("%d %d %d", &G_attack, &G_defence, &G_level);
	
		if(D_level % 2 == 0)
		{
			D_bonus = bonus;
		}

		if(G_level % 2 == 0)
		{
			G_bonus = bonus;
		}

		D_value = (D_attack + D_defence)/2 + D_bonus;
		G_value = (G_attack + G_defence)/2 + G_bonus;

		if(D_value > G_value)
		{
			printf("Dabriel\n");
		}
		else
		{
			if(G_value > D_value)
			{
				printf("Guarte\n");
			}
			else
			{
				printf("Empate\n");
			}
		}
	}
	
	return 0;
}
