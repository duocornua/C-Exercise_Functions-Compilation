#include<stdio.h> 
#include<math.h> 
#include<conio.h>  
 void printMinMaxDigits(int n) 
 {     
    int digit;     
    int min, max;     
    digit = n%10;     
    n = n/10;     
    min = max = digit;  
while(n>0) 
	{       
    digit = n%10;       
    n = n/10;
    if (min > digit) min=digit;   
	if (max < digit) max=digit;    
	}    
	printf("So lon nhat: %d\n",max);    
	printf("So nho nhat: %d\n",min);    
	} 
	int prime(int n)
	{ int m = sqrt(n);  
	int i;     
	if (n<2) 
	{  
	return 0;   
	}  
	for (i = 2; i <= m; i++) 
	{        
	if (n%i == 0) 
	{       
	return 0;        
	break;       
	}  
	return 1;   
	}  
	} 
	int main() 
	{ 
	int choice, n;      
	printf("1-Xu li so nguyen to.\n");      
	printf("2-In so nho nhat, so lon nhat trong mot so nguyen to.\n");      
	printf("3-Thoat.\n");      
    do 
	{         
	printf("Vui long chon tu 1-3: ");         
	scanf("%d", &choice);         
	switch(choice) 
	{ 
case 1:      
	do 
	{        
	printf("Nhap mot so nguyen duong: ");        
	scanf("%d", &n);        
	}    
	while(n < 0);      
	if(prime(n) == 1) 
	{         
	printf("%d la mot so nguyen to.\n",n); 
	
	        
	} 
	else 
	{         
	printf("%d khong la mot so nguyen to.\n",n);         
	}
	fflush(stdin);
	break; 
case 2:      
	do 
	{        
	printf("Nhap mot so nguyen duong: ");        
	scanf("%d", &n);        
	}      
	while(n < 0);        
	printMinMaxDigits(n);        
	fflush(stdin); 
	break;  
	} 
	}      
	while(choice > 0 & choice < 3);   
	return 0; 
}
