#include <stdio.h>
int main(){
	long long icm, nod, ict, tf, ti, pa=9000000, pd=3600000;
	printf("Income: ");
	scanf("%lld", &icm);
	printf("Number of dependent: ");
	scanf("%lld", &nod);
	tf=12*(pa+nod*pd);
	ti=icm-tf;
	if (ti<=0){
		ict=0;
	}else if (ti<=5000000){
		ict=ti*0.05;
	}else if (ti<=10000000){
		ict=5000000*0.05+(ti-5000000)*0.1;
	}else if (ti<=18000000){
		ict=5000000*0.05+5000000*0.1+(ti-10000000)*0.15;
	}else {
		ict=5000000*0.05+5000000*0.1+8000000*0.15+(ti-18000000)*0.2;
	}
	printf("Income tax: %lld", ict);
	return 0;
}
