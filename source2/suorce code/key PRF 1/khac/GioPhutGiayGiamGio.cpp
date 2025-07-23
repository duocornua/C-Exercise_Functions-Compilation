#include <stdio.h>
int main() 
{
	int h, m, s;
	int a,b,c;
	int tg,tg1;
	scanf("%d%d%d", &h, &m, &s);
	scanf("%d",&tg1);
	if (tg1>=24) tg1=tg1%24;
	tg=h*3600+m*60+s;
	if (tg<tg1*3600)
	{
		tg=tg1*3600-tg;
		tg=24*3600-tg;
	}
	else
	{
		tg=tg-tg1*3600;
	}
	h=tg/3600;
	m=(tg%3600)/60;
	s=(tg%3600)%60;
	
	printf("%d %d %d",h,m,s);
}
