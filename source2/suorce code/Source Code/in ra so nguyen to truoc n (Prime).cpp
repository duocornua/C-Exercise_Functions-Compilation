#include <stdio.h>
#include <math.h>
  int isPrime(int n)
{     int m=sqrt(n),i;
      if (n<2) return 0;
      for(i=2; i<=m; i++)
	  if (n%i==0) return 0;
	  return 1;
}
  int main()	
{    int n,i;
     do{
     	printf("Nhap n: ");
     	scanf("%d",&n);
       }
    while(n<2);
	for(i=2; i<=n; i++){
	if(isPrime(i)==1){
		printf("%d ", i);
	}	
	}
	return 0;   
  }  
	  
	  
      
	

