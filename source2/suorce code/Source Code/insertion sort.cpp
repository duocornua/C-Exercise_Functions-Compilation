#include <math.h>
#include <stdio.h>

/* H�m s?p x?p s? d?ng thu?t to�n s?p x?p ch�n */
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i-1;

		/* Di chuy?n c�c ph?n t? c� gi� tr? l?n hon gi� tr?
		key v? sau m?t v? tr� so v?i v? tr� ban d?u
		c?a n� */
		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

/* H�m xu?t m?ng */
void printArray(int arr[], int n)
{
	int i;
	for (i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}




int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);

	return 0;
}


//#include <math.h>
//#include <stdio.h>
//
///* Function to sort an array
//   using insertion sort*/
//void insertionSort(int arr[], int n)
//{
//	int i, key, j;
//	for (i = 1; i < n; i++)
//	{
//		key = arr[i];
//		j = i - 1;
//
//		/* Move elements of arr[0..i-1],
//		   that are greater than key,
//		   to one position ahead of
//		   their current position */
//		while (j >= 0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j + 1] = key;
//	}
//}
//
//// A utility function to print
//// an array of size n
//void printArray(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//// Driver code
//int main()
//{
//	int arr[] = {12, 11, 13, 5, 6};
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	insertionSort(arr, n);
//	printArray(arr, n);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdbool.h>
// 
//#define MAX 10
// 
//int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
// 
//void insertionSort() {
//    int valueToInsert;
//    int holePosition;
//    int i;
//   
//    // lap qua tat ca cac so
//    for(i = 1; i < MAX; i++){ 
// 
//        // chon mot gia tri de chen
//        valueToInsert = arr[i];
// 
//        // lua chon vi tri de chen
//        holePosition = i;
// 
//        // kiem tra xem so lien truoc co lon hon gia tri duoc chen khong
//        while (holePosition > 0 && arr[holePosition-1] > valueToInsert) {
//            arr[holePosition] = arr[holePosition-1];
//            holePosition--;
//            printf(" Di chuyen phan tu : %d\n" , arr[holePosition]);
//        }
// 
//        if(holePosition != i) {
//            printf(" Chen phan tu : %d, tai vi tri : %d\n" , valueToInsert, holePosition);
//            // chen phan tu tai vi tri chen 
//            arr[holePosition] = valueToInsert;    
//        }
// 
//        printf("Vong lap thu %d#:",i);
//        display();
//    }  
//}
// 
//void display() {
//    int i;
//    printf("[");
// 
//    // Duyet qua tat ca phan tu
//    for(i = 0; i < MAX; i++){
//        printf("%d ", arr[i]);
//    }
// 
//    printf("]\n");
//}
// 
//main() {
//    printf("Mang du lieu dau vao: ");
//    display();
//    printf("-----------------------------\n");
//    insertionSort();
//    printf("-----------------------------\n");
//    printf("Mang sau khi da sap xep: ");
//    display();
//}
