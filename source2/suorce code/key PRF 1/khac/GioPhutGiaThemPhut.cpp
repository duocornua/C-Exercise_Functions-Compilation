#include <stdio.h>
int main() 
{
	int h, m, s;
	scanf("%d%d%d", &h, &m, &s);
	m += 30;
	if (m >= 60) 
	{
		h++;
		m -= 60;
	}
	
	if (h >= 24) h = 0;
	if (h < 10) printf("0%d:", h);
	else printf("%d:", h);
	
	if (m < 10) printf("0%d:", m);
	else printf("%d:", m);
	
	if (s < 10) printf("0%d", s);
	else printf("%d", s);
	
return(0);
}
