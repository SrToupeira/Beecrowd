#include <iostream>

using namespace std;

int main()
{
	
	int h, m, h1, m1, h2, m2;
	
	scanf("%d %d %d %d", &h, &m, &h1, &m1);
	
	if(m1 < m)
	{
		m2 = (60 - m) + m1;
		h1-=1;	
		
		if(m2 >= 60)
		{
			m2 -= 60;
		}
	}
	else
	{
		m2 = m1 - m;
	}
	
	if(h1 < h)
	{
		h2 = (24 - h) + h1;	
		
	}
	else
	{
		h2 = h1 - h;
	}
	
	if(h2 == 0 && m2 == 0)
	{
		h2 = 24;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2,m2);

	return 0;
}
