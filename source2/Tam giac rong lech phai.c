#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		printf(i==n || j==n || i+j==n+1 ? "*" : " ");
		}
	printf("\n");	
	}
    return 0;
}
