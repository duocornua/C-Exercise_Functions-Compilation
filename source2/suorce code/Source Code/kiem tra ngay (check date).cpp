#include<stdio.h>
int validDate(int d, int m, int y);
int main(){
	int d,m,y;
	printf("Nhap Ngay/Thang/Nam:");
	scanf("%d/%d/%d", &d ,&m ,&y);
	if(validDate(d,m,y)){
		printf("Ngay %d/%d/%d hop le!", d,m,y);
	}else{
		printf("Ngay %d/%d/%d khong hop le!", d,m,y);
	};
}
int validDate(int d, int m, int y){
	int maxD=31;
	if((d>=1 && d<=31) && ( m<1 && m>12)){
		return 0;
	}
	if (m==4 || m==6 || m==11){
	   maxD=30;	
	}else if (m==2){
	   if (y%400==0 ||(y%4==0 && y%100!=0)){
	   	maxD=29;
	   }else{
	   	maxD=28;
	   }	
	return d<=maxD;
}		
		}

