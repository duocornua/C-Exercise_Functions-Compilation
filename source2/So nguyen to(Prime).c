#include<stdio.h>
#include<math.h>

int main (){
	int n,i; 
	printf("nhap so nguyen n = ");
	scanf("%d", &n);
	if(n<=1)
	{
		printf("\n%d ko phai la so nguyen to", n);
		return 0;
	}
	for (i = 2; i < n - 1; ++i) {
        if (n % i == 0) {
            printf("\n%d khong phai la so nguyen to\n", n);
            return 0;
        }
    }
    printf("\n%d la so nguyen to\n", n);
    return 0;
	}
	
//#include<stdio.h>  
//#include<conio.h>  
//
//int main()  
//{  
//int n,i,m=0,biendem=0;  
//
//printf("Ban hay nhap mot so bat ky de kiem tra: ");  
//scanf("%d",&n);  
//m=n/2;  
//for(i=2;i<=m;i++)  
//{  
//if(n%i==0)  
//{  
//printf("\nSo vua nhap khong la so nguyen to.");  
//biendem=1;  
//break;  
//}  
//}  
//if(biendem==0)  
// printf("\nSo vua nhap la so nguyen to.");  
//
// printf("\n\n===========================\n");
// printf("VietJack chuc cac ban hoc tot!");
//getch();  
//}  
