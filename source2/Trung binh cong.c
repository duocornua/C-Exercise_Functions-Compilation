#include <stdio.h>
int main(){
	int i, n, a[100];
	double sum=0, count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2!=0){
			sum+=a[i];
			count+=1;
		}
	}
	sum=sum/count;
	printf("%.3lf", sum);
	return 0;
}
