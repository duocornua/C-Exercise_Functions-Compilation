#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	int n, i;
	float s=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		s+= (float)1/((i-1)+i);
	}
	
	printf("%.2f", s);
	
	
	return 0;
}
