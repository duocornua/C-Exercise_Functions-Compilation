#include <stdio.h>

// ham sap xep hang tang dan
void Sort(int arr[][100],int ROWS,int COLS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < COLS; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int t=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=t;
                }
            }
        }
    }
}
// ham sap xep cot tang dan
void Sort2(int arr[][100], int ROWS, int COLS){
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS - 1; j++) {
            for (int k = 0; k < ROWS - j - 1; k++) {
                if (arr[k][i] > arr[k + 1][i]) {
                    int t=arr[k][i];
                    arr[k][i]=arr[k+1][i];
                    arr[k+1][i]=t;
                }
            }
        }
    }
}

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
    int i,j;
    int a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);}}

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Sort the array
    
    Sort(a,n,m);
//	Sort2(a,n,m);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
