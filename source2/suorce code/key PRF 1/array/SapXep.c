#include<stdio.h>

int main(){
	int i,j;
	float arr[5];
	for (i=0;i<5;i++){
		scanf("%f",&arr[i]);
	}

	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if (arr[i] > arr[j])
			{
				float t = arr[i];
				arr[i] =arr[j];
				arr[j] = t;
			}
		}
	}
		
	for (int i=0;i<4;i++)
	{
		printf("%.3f ",arr[i]);
	}
	printf("%.3f",arr[4]);	
}
