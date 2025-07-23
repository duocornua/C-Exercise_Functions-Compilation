#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=sqrt(n);
	if (i*i==n) printf(" it is a perfect number");
	else printf(" it is not a perfect number");
	return 0;
}
