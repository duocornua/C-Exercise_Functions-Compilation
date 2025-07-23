#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf %lf",&x,&y);
	printf("%.5lf", x*x*x+x*y);
}
