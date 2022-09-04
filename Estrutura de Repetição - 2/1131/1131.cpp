#include <stdio.h>

int main()
{

	int i = 0, gol_inter, gol_gremio, grenais = 0, inter_wins = 0, gremio_wins = 0, draws = 0;
	int loop;
	
	while(i < 1)
	{
		scanf("%d %d", &gol_inter, &gol_gremio);
		
		grenais++;
				
		if(gol_gremio > gol_inter)
		{
			gremio_wins++;
		}
		else
		{
			if(gol_inter > gol_gremio)
			{
				inter_wins++;
			}
			else
			{
				draws++;
			}
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
		
		scanf("%d", &loop);
		
		if(loop == 2)
		{
			break;
		}
	
	}
	
	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", inter_wins);
	printf("Gremio:%d\n", gremio_wins);
	printf("Empates:%d\n", draws);
	
	if(inter_wins > gremio_wins)
	{
		printf("Inter venceu mais\n");
	}
	else
	{
		if(gremio_wins > inter_wins)
		{
			printf("Gremio venceu mais\n");
		}
		else
		{
			printf("Nao houve vencedor\n");
		}
	}
	
	return 0;
}
