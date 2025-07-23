#include<stdio.h>
int ktNgto(int n){
	int i;
	if(n<2)return 0;
	for(i=2;i<=n/2;i++){
		if(n%i ==0)return 0;
	}
	return 1;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int i=0;
	while(i<3){
		if(ktNgto(++n)){
			i++;
			printf("%d ",n);
		}
	}
}
