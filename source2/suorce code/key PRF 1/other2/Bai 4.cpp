#include <stdio.h>
#include <math.h>

int main(){
	int a[7],i,j;
	for(i=0;i<7;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<7;i++){
	    for(j=i+1;j<7;j++){
	      int temp=a[i];
	      if(a[i]>a[j]){
	         a[i]=a[j];
	         a[j]=temp;
	  }
	}
    
}
  for(i=0;i<7;i++)
       printf("%d ", a[i]);
return 0;}
