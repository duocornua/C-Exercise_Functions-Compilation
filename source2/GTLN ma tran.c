#include <stdio.h>
int main(){
	int a[100][100], i, j, n, max;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	max=a[0][0];
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(i==j){
				if(a[i][j]>max){
					max=a[i][j];
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}
	
