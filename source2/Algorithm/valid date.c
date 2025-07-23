#include <stdio.h>
int ValidDate( int d, int m, int y) {
	int maxd, q;
	if (m==4 || m==6 || m==9 || m==11){
		maxd=30;
	}else if (m==2){
		if (y%4==0){
			maxd=29;
		}else{
			maxd=28;
		}
	}else{
		maxd=31;
	}
	q=(d<=maxd);
	if (d<1 || d>31 || m<1 || m>12){
		q=0;
	}
	return q;	 
}  

int main(){
	int d, m, y;
	printf("Enter data of a day: "); 
	scanf("%d/%d/%d", &d, &m, &y);
	if (ValidDate(d,m,y)==1){
		printf("Valid date");
	}else{
		printf("Invalid date");
	}
	return 0;
}

