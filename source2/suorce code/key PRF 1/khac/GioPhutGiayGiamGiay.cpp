#include <stdio.h>
int main() 
{
	int h, m, s;
	int a,b,c;
	int tg,tg1;
	scanf("%d%d%d", &h, &m, &s);
	scanf("%d",&tg1);
	if (tg1>=86400) tg1=tg1%86400;
	tg=h*3600+m*60+s;
	if (tg<tg1)
	{
		tg=tg1-tg;
		tg=3600*24-tg;
	}
	else
	{
		tg=tg-tg1;
	}
	h=tg/3600;
	m=(tg%3600)/60;
	s=(tg%3600)%60;
	
	printf("%d %d %d",h,m,s);
}
