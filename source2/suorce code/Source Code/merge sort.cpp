/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

//#include <stdio.h>
// 
//#define MAX 10
// 
//int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
//int b[10];
// 
//void merging(int low, int mid, int high) {
//    int l1, l2, i;
// 
//    l1 = low;
//    l2 = mid + 1;
//    for(i = low; l1 <= mid && l2 <= high; i++) {
//        if(arr[l1] <= arr[l2]) {
//            b[i] = arr[l1++];
//        } else {
//            b[i] = arr[l2++];
//        }
//    }
// 
//    while(l1 <= mid) {
//        b[i++] = arr[l1++];
//    }
//    while(l2 <= high) {
//        b[i++] = arr[l2++];
//    }
//    for(i = low; i <= high; i++) {
//        arr[i] = b[i];
//    }
//}
// 
//void sort(int low, int high) {
//    int mid;
// 
//    if(low < high) {
//        mid = (low + high) / 2;
//        sort(low, mid);
//        sort(mid+1, high);
//        merging(low, mid, high);
//    } else {
//        return;
//    }
//}
// 
//void display() {
//     int i;
//     printf("[");
// 
//     // Duyet qua tat ca phan tu
//     for(i = 0; i < MAX; i++){
//          printf("%d ", arr[i]);
//     }
// 
//     printf("]\n");
//}
// 
//int main() {
//    printf("Mang du lieu dau vao: ");
//    display();
//    printf("-----------------------------\n");
//    sort(0, MAX);
//    printf("Mang sau khi da sap xep: ");
//    display();
//}
