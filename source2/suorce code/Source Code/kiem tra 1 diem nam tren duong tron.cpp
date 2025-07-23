#include <stdio.h>
#include <math.h>
int getRelPos( double x, double y, double r){
	double d2=x*x+y*y;
	double r2=r*r;
	if (d2<r2)return 1;
	else if (d2==r2)return 0;
	return -1;
}
int main(){
	double x, y, r, result;
	printf("Nhap x:");
	scanf ("%lf",&x);
	printf("Nhap y:");
	scanf ("%lf",&y);
	do{
		printf("Nhap r:");
		scanf("%lf",&r);
	}
	while(r<0);
	result = getRelPos(x,y,r);
	if(result ==1){
		printf("Diem nam trong duong tron!");
	}else if (result ==0){
		printf("Diem nam tren duong tron!");
	}else{
		printf("Diem nam ngoai duong tron!");
	}
}


