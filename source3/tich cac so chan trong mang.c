#include <stdio.h>
int main() {
    int n;
    
    printf("Nhap so luong: ");
    scanf("%d", &n);
    
    int arr[n];
    int i;
    
    printf("Nhap cac phan tu mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int tich=1;
    for(i=0;i<n;i++){
    	if(arr[i] %2==0){
    		tich *= arr[i];
		}
	}
	printf("\nTich so chan trong mang %d ",tich);
    return 0;
}

