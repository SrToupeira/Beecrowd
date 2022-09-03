#include <iostream>

using namespace std;

int main()
{
	string Sheldon, Raj;
	int N;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
	{
		cin >> Sheldon >> Raj;
		
		if(Sheldon == "tesoura")
		{
			if(Raj == "papel")
			{
				printf("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				if(Raj =="lagarto")
				{
					printf("Caso #%d: Bazinga!\n", i);
				}
				else
				{
					if(Raj == "Spock")
					{
						printf("Caso #%d: Raj trapaceou!\n", i);
					}
					else
					{
						if(Raj == "pedra")
						{
							printf("Caso #%d: Raj trapaceou!\n", i);
						}
						else
						{
							printf("Caso #%d: De novo!\n", i);
						}
					}
				}
			}
		}
		else
		{
			if(Sheldon == "papel")
			{
				if(Raj == "pedra")
				{
					printf("Caso #%d: Bazinga!\n", i);
				}
				else
				{
					if(Raj == "Spock")
					{
						printf("Caso #%d: Bazinga!\n", i);
					}
					else
					{
						if(Raj == "tesoura")
						{
							printf("Caso #%d: Raj trapaceou!\n", i);
						}
						else
						{
							if(Raj == "lagarto")
							{
								printf("Caso #%d: Raj trapaceou!\n", i);
							}
							else
							{
								printf("Caso #%d: De novo!\n", i);
							}
						}
					}
				}
			}
			else
			{
				if(Sheldon == "pedra")
				{
					if(Raj == "lagarto")
					{
						printf("Caso #%d: Bazinga!\n", i);
					}
					else
					{
						if(Raj == "tesoura")
						{
							printf("Caso #%d: Bazinga!\n", i);
						}
						else
						{
							if(Raj == "papel")
							{
								printf("Caso #%d: Raj trapaceou!\n", i);
							}
							else
							{
								if(Raj == "Spock")
								{
									printf("Caso #%d: Raj trapaceou!\n", i);
								}
								else
								{
									printf("Caso #%d: De novo!\n", i);
								}
							}
						}
					}
				}
				else
				{
					if(Sheldon == "lagarto")
					{
						if(Raj == "Spock")
						{
							printf("Caso #%d: Bazinga!\n", i);
						}
						else
						{
							if(Raj == "papel")
							{
								printf("Caso #%d: Bazinga!\n", i);
							}
							else
							{
								if(Raj == "pedra")
								{
									printf("Caso #%d: Raj trapaceou!\n", i);
								}
								else
								{
									if(Raj == "tesoura")
									{
										printf("Caso #%d: Raj trapaceou!\n", i);
									}
									else
									{
										printf("Caso #%d: De novo!\n", i);
									}
								}
							}
						}
					}
					else
					{
						if(Sheldon == "Spock")
						{
							if(Raj == "tesoura")
							{
								printf("Caso #%d: Bazinga!\n", i);
							}
							else
							{
								if(Raj == "pedra")
								{
									printf("Caso #%d: Bazinga!\n", i);
								}
								else
								{
									if(Raj == "papel")
									{
										printf("Caso #%d: Raj trapaceou!\n", i);
									}
									else
									{
										if(Raj == "lagarto")
										{
											printf("Caso #%d: Raj trapaceou!\n", i);
										}
										else
										{
											printf("Caso #%d: De novo!\n", i);
										}
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
