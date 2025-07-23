#include <stdio.h>
int main(){
	int a[100], b[100], i, j, k=1, l, n, count, check;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	b[0]=a[0];
	for(i=0;i<n;i++){
		check=0;
		for(j=0;j<k;j++){
			if(a[i]==b[j] && i!=0){
				check=1;
			}
		}
		if(check==0){
			count=1;
			for(l=i+1;l<n;l++){
				if(a[i]==a[l]){
					count+=1;
				}
			}
			printf("%d_%d\n", a[i], count);
			b[k]=a[i];
			k++;
		}
	}
	return 0;
}
