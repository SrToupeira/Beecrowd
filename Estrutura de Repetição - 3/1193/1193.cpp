#include <stdio.h>

int main()
{
	int N
	char type[3]

	scanf("%d %3s", &number, type);

	switch(type)
	{
		case "dec":
			
			//conversao de numero decimal para binário

			quo = number;
			
			for(int i = 0; quo > 0; i++)
			{
				if(quo % 2 == 0)
				{
					bin[i] = 0;
				}
				else
				{
					bin[i] = 1;
				}

				quo = quo / 2;
			}

			//conversao de numero decimal para hexadecimal

			for
			{
				switch(quo % 16)
				{
					case 10:
						hex[i] = a;
						break;

					case 11:
						hex[i] = b;
						break;

					case 12:
						hex[i] = c;
						break;

					case 13:
						hex[i] = d;
						break;

					case 14:
						hex[i] = e;
						break;

					case 15:
						hex[i] = f;
						break;
					
					default:
						hex[i] = quo % 16;




					
