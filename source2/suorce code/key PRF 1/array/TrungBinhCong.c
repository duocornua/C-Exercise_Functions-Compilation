#include<stdio.h>
int main(){
		
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	int d=0;
	float tbc=0;
	
	for (int i=0;i<n;i++){
		if (arr[i] % 2 == 0)
		{	
		sum+=arr[i];
		d=d+1;
		}
	}
		
	tbc=(float)sum/d;
	printf("%f",tbc);	
}
