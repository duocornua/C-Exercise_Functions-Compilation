#include <stdio.h>
int main(){
	int i, j, n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf(i==1 || i==n || j==1 || j==m ? "* " : "  ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
