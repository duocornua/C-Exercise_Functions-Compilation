#include <stdio.h>
int fibo(int n)
{
	int t1=1,t2=1,f=0;
	for (int i=3;i<=n;i++)
	{
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return f;
}

int main()
{
	int n;
	scanf ("%d",&n);
	for (int i=0;i<=n;i++)
	if (fibo(n)) printf ("%d",n);
return 0;
}

