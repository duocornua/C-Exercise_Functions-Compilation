#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	int n, a[100], i, tong=0, dem=0;
	scanf("%d", &n);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(i=0; i<n; i++){
		if(a[i]>0){
			tong+=a[i];
			dem++;
		}
	}
	printf("%.2f", (float)tong/dem);
	
	
	return 0;
}
