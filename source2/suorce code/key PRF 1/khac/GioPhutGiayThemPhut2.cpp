#include <stdio.h>
int main() 
{
	int h, m, s;
	int a,b,c;
	int tg,tg1;
	scanf("%d%d%d", &h, &m, &s);
	scanf("%d",&tg1);
//	if (tg1>=1440) tg1=tg1%60;
	tg=h*3600+m*60+s;
	tg=tg+tg1*60;
	
	h=(tg/3600)%24;
	m=(tg%3600)/60;
	s=(tg%3600)%60;
	printf("%d %d %d",h,m,s);
}
