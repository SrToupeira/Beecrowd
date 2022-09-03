#include <iostream>

using namespace std;

int main()
{
	float numero, positivo=0, media=0;
	
	for(int i = 0; i < 6; i++)
	{
		scanf("%f", &numero);
		
		if(numero > 0)
		{
			positivo++;
			media += numero;
		}
	}
	
	media = media / positivo;
	
	printf("%.0f valores positivos\n", positivo);
	printf("%.1f\n", media);

	return 0;
}
