#include <stdio.h>

int main()
{
	int N;
	char direction, position;

	while(true)
	{
		position = 'N';
		
		scanf("%d", &N);
		
		if(N != 0)
		{
			for(int i = 0; i < N; i++)
			{
				scanf(" %c", &direction);
				
				if(direction == 'D')
				{
					if(position == 'N')
					{
						position = 'L';
					}
					else
					{
						if(position == 'S')
						{
							position = 'O';
						}
						else
						{
							if(position == 'L')
							{
								position = 'S';
							}
							else
							{
								if(position == 'O')
								{
									position = 'N';
								}
							}
						}
					}
				}
				else
				{
					if(position == 'N')
					{
						position = 'O';
					}
					else
					{
						if(position == 'S')
						{
							position = 'L';
						}
						else
						{
							if(position == 'L')
							{
								position = 'N';
							}
							else
							{
								if(position == 'O')
								{
									position = 'S';
								}
							}
						}
					}
				}
			}	
						
			printf("%c\n", position);
		}
		else
		{
			break;
		}
	}
	
	return 0;
}
