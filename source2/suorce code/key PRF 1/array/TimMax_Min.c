#include<stdio.h>
int main(){
		
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int min=arr[0];
	int max=arr[0];
	
	for (int i=0;i<n;i++){
		if (arr[i] < min) min=arr[i];
		if (arr[i] > max) max=arr[i];
	}
	
	printf("%d %d",max, min);
}
