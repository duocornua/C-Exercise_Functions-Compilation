#include <stdio.h>
int main(){
	int a[100], odd[100], even[100], i, y, j=0, k=0, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2==0){
			even[j]=a[i];
			j++;
		}else{
			odd[k]=a[i];
			k++;
		}
	}
	for(i=0;i<j-1;i++){
		for(y=i+1;y<j;y++){
			if(even[i]>even[y]){
				int t=even[i];
				even[i]=even[y];
				even[y]=t;
			}
		}
	}
	for(i=0;i<k-1;i++){
		for(y=i+1;y<k;y++){
			if(odd[i]<odd[y]){
				int t=odd[i];
				odd[i]=odd[y];
				odd[y]=t;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%d ", even[i]);
	}
	printf("\n");
	for(i=0;i<k;i++){
		printf("%d ", odd[i]);
	}
	return 0;
}
