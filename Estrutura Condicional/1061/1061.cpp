#include <iostream>

using namespace std;

int main()
{
	char lixo[10];
	int d, h, m, s, d1, h1, m1, s1, d2, h2, m2, s2;
	
	scanf("%s %d",lixo,&d);
	scanf("%d %s %d %s %d", &h, lixo, &m, lixo, &s);
	scanf("%s %d",lixo, &d1);
	scanf("%d %s %d %s %d",&h1, lixo, &m1, lixo, &s1);
	
	
	if(s1 < s)
	{
		s2 = (60 - s) + s1;
		m1-=1;
		
		if(s2 > 60)
		{
			s2-=60;
		}
	}
	else
	{
		if(s1 == s || s1 > s)
		{
			s2 = s1 - s;
		}
	}
	
	if(m1 < m)
	{
		m2 = (60 - m) + m1;
		h1-=1;
		
		if(m2 > 60)
		{
			m2-=60;
		}
	}
	else
	{
		if(m1 == m || m1 > m)
		{
			m2 = m1 - m;
		}
	}
	
	if(h1 < h)
	{
		h2 = (24 - h) + h1;
		d1-=1;
		
		if(h2 > 24)
		{
			m2-=24;
		}
	}
	else
	{
		if(h1 == h || h1 > h)
		{
			h2 = h1 - h;
		}
	}
	
	d2 = d1 - d;

	printf("%d dia(s)\n",d2);
	printf("%d hora(s)\n",h2);
	printf("%d minuto(s)\n",m2);
	printf("%d segundo(s)\n",s2);
	
	return 0;
}
