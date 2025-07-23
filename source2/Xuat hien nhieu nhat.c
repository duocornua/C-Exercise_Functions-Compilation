#include <stdio.h>
int main(){
	int a[7], i, j, temp, max=0;
	for(i=0;i<7;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<7;i++){
		temp=0;
		if(a[i]>9){
			temp+=1;
			for(j=i+1;j<7;j++){
				if(a[i]==a[j]){
					temp+=1;
				}
			}
		}
		if(max<temp){
			max=temp;
		}
	}
	if(max==0){
		printf("no two-digit number");
	}else{
	for(i=0;i<7;i++){
		temp=0;
		if(a[i]>9){
			temp+=1;
			for(j=i+1;j<7;j++){
				if(a[i]==a[j]){
					temp+=1;
				}
			}
		}
		if(temp==max){
			printf("%d ", a[i]);
		}
	}
	}
	return 0;
}
