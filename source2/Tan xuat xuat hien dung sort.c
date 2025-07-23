#include <stdio.h>
int main(){
	int i, j, n, a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		int count=1;
		while(i<n-1 && a[i]==a[i+1]){
			count+=1;
			i++;
		}
		printf("%d_%d\n", a[i], count);
	}
	return 0;
}
