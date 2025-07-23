#include <stdio.h>
int GCD(int a, int b)
{
    int temp;
    if(b > a) 
	{   
        temp = b;
        b = a;
        a = temp;
    }     
     
    int i = b;  
    while(i >= 1) 
	{
        if(a%i == 0 && b%i == 0)  
            break;          
        i--;
    }
    return i;  
}   
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",GCD(a,b));
	printf("%d",(a*b)/GCD(a,b));
	return 0;
 } 
