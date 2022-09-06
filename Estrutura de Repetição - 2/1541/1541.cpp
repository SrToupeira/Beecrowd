#include <stdio.h>
#include <cmath>

int main()
{
	float base, height, law, rate;
	
	while(true)
	{
		scanf("%f", &base);
		
		if(base == 0) 
			break;
		
		scanf("%f %f", &height, &law);
		
		rate = law / 100.0;
		
		int side = (int)sqrt(((base * height) / rate));
		
		printf("%d\n", side);	
	
	}
	
	return 0;
}
