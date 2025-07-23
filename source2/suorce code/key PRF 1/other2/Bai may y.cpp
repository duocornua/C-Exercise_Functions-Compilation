#include <stdio.h>
#include <math.h>


int main(){
	int a[100],i,n,j,sum;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	   scanf("%d", &a[i]);}
	scanf("%d", &sum);
	
    
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		if(a[i]+a[j]==sum){
    		  printf("%d\n%d", i,j);
    		  break;}
		}
	}


    return 0;
}
