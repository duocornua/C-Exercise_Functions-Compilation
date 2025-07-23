#include<stdio.h>
#include<math.h>
bool prime(int n)
{
	if (n<2) return false;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0) return false;
	}
	return true;
}
int main()
{
	int n,s=0;
	printf("How many elements do you want to enter into the integer array? [1..100]");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		if (prime(a[i])) s=s+1;
	}
	printf("%d",s);
return 0;
}
