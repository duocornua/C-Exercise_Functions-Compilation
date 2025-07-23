#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
		for(j=1;j<2*n;j++){
			if(j==2*n-i){
				printf("*");
				break;
			}
			printf(j==i || i==1 ? "*" : " ");
		}
	printf("\n");	
	}
    return 0;
}
