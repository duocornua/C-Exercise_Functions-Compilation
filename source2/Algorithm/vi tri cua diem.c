#include <stdio.h>
int GetRelPos(double x, double y, double r){
	int q=2;
	double d=x*x+y*y; 
	r=r*r;
	if (d==r){
		q=0;
	}else if (d<r){
		q=1;
	}
	return q; 
}

int main(){
	double x, y, r;
	printf("Enter a point: "); 
	scanf("%lf %lf", &x, &y);
	do{
		printf("Enter the radius: "); 
		scanf("%lf", &r);
	}while(r<0);
	if (GetRelPos(x,y,r)==0){
		printf("The point is on the circle");
	}else if (GetRelPos(x,y,r)==1) {
		printf("The point is in the circle");
	}else{
		printf("The point is out of the circle");
	}
	return 0;
}

