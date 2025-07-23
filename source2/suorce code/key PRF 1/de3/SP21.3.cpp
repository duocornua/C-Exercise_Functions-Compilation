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
	int n;
	scanf("%d",&n);
	if (prime(n)) printf("%d is a prime number",n);
	else printf("%d is not a prime number",n);
}
