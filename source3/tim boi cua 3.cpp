#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<= n; i++){
		if(i%3== 0){
			printf("%d \n",i);
		}
	}
}
