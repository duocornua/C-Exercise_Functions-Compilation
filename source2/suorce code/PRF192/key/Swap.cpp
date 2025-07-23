#include <stdio.h>
#include <math.h>

//-----------------------------------------------------------------
/*
// doi vi tri so le lon nhat va nho nhat
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements of the array:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min_odd = -1, max_odd = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			if (min_odd == -1 || arr[i] < arr[min_odd]) {
				min_odd = i;
			}
			if (max_odd == -1 || arr[i] > arr[max_odd]) {
				max_odd = i;
			}
		}
	}
	if (min_odd != -1 && max_odd != -1) {
		swap(&arr[min_odd], &arr[max_odd]);
	}
	printf("The modified array is:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// doi vi tri so chan lon nhat va nho nhat
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements of the array:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min_odd = -1, max_odd = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			if (min_odd == -1 || arr[i] < arr[min_odd]) {
				min_odd = i;
			}
			if (max_odd == -1 || arr[i] > arr[max_odd]) {
				max_odd = i;
			}
		}
	}
	if (min_odd != -1 && max_odd != -1) {
		swap(&arr[min_odd], &arr[max_odd]);
	}
	printf("The modified array is:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//== swap array
// swap 2 vi tri trong array
#include <stdio.h>
#include<stdlib.h>
int main() {
	int i,size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int A[size];
	for(i=0; i<size; i++)
		scanf("%d",&A[i]);

	int pos1,pos2;
	printf("\nEnter the two positions to swap : ");
	scanf("%d%d", &pos1, &pos2);

	if (pos1>=0 && pos2>=0 && pos1<size && pos2<size && pos1 != pos2) {
		{
			A[pos1]=A[pos1]+A[pos2];
			A[pos2]=A[pos1]-A[pos2];
			A[pos1]=A[pos1]-A[pos2];
		}

		printf("\nThe array after swapping :\n",pos1,pos2);
		for(i=0; i<size; i++) printf("%d\t", A[i]);
	} else {
		printf("\nCannot swap the element at position %d and %d, plz check range !", pos1, pos2);
		printf("\nThe origin array:\n");
		for(i=0; i<size; i++) printf("%d\t", A[i]);
	}
	return 0;
}
*/
//-----------------------------------------------------------------
