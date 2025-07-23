#include <stdio.h>
#include <string.h>
int main(){
	int n, a[100], i=0, j;
	scanf("%d", &n);
	while(n!=0){
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", a[j]);
	}
	return 0;
}
