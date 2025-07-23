#include <stdio.h>
int main(){
	int c, m, n, i, count=0;
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &c);
	for(i=m;i<=n;i++){
		count+=1;
		if(count>8){
			printf("\n");
			count=1;
		}
		printf("%-3d", i);
	}
	return 0;
}
