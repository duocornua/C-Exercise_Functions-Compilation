#include <stdio.h>
int main(){
	char a, b;
	scanf("%c%c", &a, &b);
	int ia=a, ib=b;
	int arr[100], i=0, j;
	while(ia!=0){
		arr[i]=ia%2;
		i++;
		ia=ia/2;
	}
	while(i<8){
		arr[i]=0;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", arr[j]);
	}
	int brr[100];
	i=0;
	while(ib!=0){
		brr[i]=ib%2;
		i++;
		ib=ib/2;
	}
	while(i<8){
		arr[i]=0;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", brr[j]);
	}
	return 0;
}
