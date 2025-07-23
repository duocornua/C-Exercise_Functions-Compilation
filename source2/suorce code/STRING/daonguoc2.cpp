#include <stdio.h>
int daonguoc(int n)
{
	int m=0;
	while(n>0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	return m;
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++)
	{
		if(daonguoc(arr[i])==arr[i])
		printf("%d",arr[i]);
		}
}
