#include <iostream>

using namespace std;

int main()
{

	int A, B, C, tempo1, tempo2, tempo3;
	
	scanf("%d %d %d", &A, &B, &C);
	
	tempo1 = B*2 + C*4;
	tempo2 = A*2 + C*2;
	tempo3 = A*4 + B*2;
	
	if(tempo1 < tempo2 && tempo2 < tempo3)
	{
		printf("%d\n",tempo1);
	}
	else
	{
		if(tempo1 < tempo3 && tempo3 < tempo2)
		{
			printf("%d\n",tempo1);
		}
		else
		{
			if(tempo2 < tempo1 && tempo1 < tempo3)
			{
				printf("%d\n",tempo2);
			}
			else
			{
				if(tempo2 < tempo3 && tempo3 < tempo1)
				{
					printf("%d\n",tempo2);
				}
				else
				{
					if(tempo3 < tempo2 && tempo2 < tempo1)
					{
						printf("%d\n",tempo3);
					}
					else
					{
						if(tempo3 < tempo1 && tempo1 < tempo2)
						{
							printf("%d\n",tempo3);
						}
						else
						{
							if(tempo1 == tempo2 && tempo2 < tempo3)
							{
								printf("%d\n",tempo1);
							}
							else
							{
								if(tempo2 == tempo3 && tempo3 < tempo1)
								{
									printf("%d\n",tempo2);
								}
								else
								{
									if(tempo1 == tempo3 && tempo3 < tempo2)
									{
										printf("%d\n",tempo3);
									}
									else
									{
										printf("%d\n",tempo1);
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}
