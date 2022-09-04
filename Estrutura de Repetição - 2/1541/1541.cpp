#include <stdio.h>
#include <cmath>

int main()
{
	int base, height, law, side;
	float rate;
	
	while(true)
	{
		scanf("%d", &base);
		
		if(base != 0)
		{
			scanf("%d %d", &height, &law);
			
			rate = law / 100.0;
			
			side = sqrt((base * height) / rate);
			
			printf("%d\n", side);	
		}
		else
		{
			break;
		}
	}
	
	return 0;
}
