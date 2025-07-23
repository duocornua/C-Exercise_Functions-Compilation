//TINH TRUNG BINH CONG CUA BINH PHUONG 2 SO
#include<stdio.h>
#include<math.h>
double aver(double x, double y){
    return (pow(x, 2) + pow(y, 2)) / 2 ;
}
int main(){
    double x, y;
    scanf("%lf%lf", &x, &y);
    printf("%.2lf", aver(x,y));
}
