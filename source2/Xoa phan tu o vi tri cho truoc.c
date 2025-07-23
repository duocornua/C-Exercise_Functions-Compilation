#include <stdio.h>
int main(){
	int a[100], i, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int p;
	scanf("%d", &p);
	p-=1;
	for(i=p;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
	return 0;
}
