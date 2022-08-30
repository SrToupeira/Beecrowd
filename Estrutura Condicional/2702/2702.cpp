#include <iostream>

using namespace std;

int main()
{

	int fd, bd, md, fp, bp, mp, n1, n2 ,n3, nt;
	
	scanf("%d %d %d %d %d %d", &fd, &bd, &md, &fp, &bp, &mp);
	
	if(fp > fd)
	{
		n1 = fp - fd;
	}
	else
	{
		n1 = 0;
	}
	if(bp > bd)
	{
		n2 = bp - bd;
	}
	else
	{
		n2 = 0;
	}
	if(mp > md)
	{
		n3 = mp - md;
	}
	else
	{
		n3 =0;
	}
	
	nt = n1 + n2 + n3;
	
	printf("%d\n",nt);

	return 0;
}
