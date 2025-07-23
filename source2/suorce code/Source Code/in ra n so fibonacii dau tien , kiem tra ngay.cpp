#include<stdio.h> 
#include<stdlib.h> 
void fibo(int m){
	long long int t1=1, t2=1, t;
	printf(" %d so dau tien cua day Fibonacci la: 1 1",m);
	for (int i=3; i<=m; i++){
		t=t1+t2;
		t1=t2;t2=t;
		printf(" %lli",t2);
	}
	printf("\n");
}
int test(int x, int y, int z){
	if (z<=0 || y>12 || y<1 || x<1) return 0;
	int maxd=30;
	if(y==1||y==3||y==5||y==7||y==8||y==10||y==12) maxd=31;
	else if (y==2){
		maxd=(z%400==0 || ( z%4==0 && z%100!=0))? 29:28;
	}
	return x<=maxd;
}
int main(){
	int n, m, x, y, z;
	do {
		printf("1 - Day Fibonacci \n2 - Kiem tra ngay\n");
		printf("3 - Thoat\nVui long chon tu 1-3: ");
		scanf("%d%*c", &n);
		switch (n){
			case 1:
				printf("Nhap n: ");
				do {
				scanf("%d",&m);
				} while (m<0);
				fibo(m);
				break;
			case 2:
				printf("Nhap ngay: ");
				scanf("%d %d %d",&x, &y,&z);
				printf(test(x, y, z)==1? "Ngay %d/%d/%d la mot ngay hop le!\n":"Ngay %d/%d/%d la mot ngay hop le!\n");
				break;
		}
	} while (n>0 && n<3);
	printf("Ket thuc!");
	return 0;
	
}
