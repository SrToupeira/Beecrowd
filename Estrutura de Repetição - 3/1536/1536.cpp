#include <stdio.h>

int main()
{
	int N, mandante1, visitante2, mandante2, visitante1, pontos1, pontos2;

	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
			pontos1 = 0;
			pontos2 = 0;

		for(int j = 0; j < 2; j++)
		{
			if(j == 0)
			{
				scanf("%d x %d", &mandante1, &visitante2);
			
				if(mandante1 > visitante2)
				{
					pontos1 += 3;
				}
				else
				{ 
					if(mandante1 < visitante2)
					{
						pontos2 += 3;
					}
					else
					{
						pontos1++;
						pontos2++;
					}
				
				}
			}
			else
			{
				scanf("%d x %d", &mandante2, &visitante1);
				
				if(mandante2 > visitante1)
				{
					pontos2 += 3;
				}
				else
				{ 
					if(mandante2 < visitante1)
					{
						pontos1 += 3;
					}
					else
					{
						pontos1++;
						pontos2++;
					}
				}
			}
		}
			if(pontos1 > pontos2)
			{
				printf("Time 1\n");
			}
			else
			{
				if(pontos2 > pontos1)
				{
					printf("Time 2\n");
				}
				else
				{
					if((mandante1 + visitante1) > (mandante2 + visitante2))
					{
						printf("Time 1\n");
					}
					else
					{
						if((mandante1 + visitante1) < (mandante2 + visitante2))
						{
							printf("Time 2\n");
						}
						else
						{
							if(visitante1 > visitante2)
							{
								printf("Time 1\n");
							}
							else
							{
								if(visitante1 < visitante2)
								{
									printf("Time 2\n");
								}
								else
								{
									printf("Penaltis\n");
								}
							}
						}
					}
				}
			}
		}
		
	return 0;
}
