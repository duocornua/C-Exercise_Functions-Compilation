#include <stdio.h>
int main(){
	int n, check=1;
	scanf("%d", &n);
    int i;
    if (n<2){
		check=0;
    }else{
		for (i=2; i<n; i++){
	    	if (n%i==0) check=0 ; 
	    	break;
	    }
	}
	if(check==0){
		printf("Prime");
	}else{
		printf("Not Prime");
	}
	return 0;
}
