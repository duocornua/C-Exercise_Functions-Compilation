#include <stdio.h>
void SelSort(int array[],int n);
int main()
{
	int array[100], n,i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);
	SelSort(array,n);
	return 0;
}
void SelSort(int array[], int n)
{
	int i, j, position, swap;
	for(i = 0; i < (n - 1); i++)
	{
		position=i;
		for(j = i + 1; j < n; j++)
		{
			if(array[position]>array[j])
				position=j;
		}
		if(position != i)
		{
			swap=array[i];
			array[i]=array[position];
			array[position]=swap;
		}
	}
	for(i = 0; i < n; i++)
		printf("%d	", array[i]);
}
//#include <stdio.h>
//#include <stdbool.h>
// 
//#define MAX 10
// 
//int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
// 
//void selectionSort() {
// 
//    int indexMin, i, j; 
// 
//    // lap qua ta ca cac so
//    for(i = 0; i < MAX-1; i++){ 
//        // thiet lap phan tu hien tai la min 
//        indexMin = i;
// 
//        // kiem tra phan tu hien tai co phai la nho nhat khong 
//        for(j = i+1; j<MAX; j++){
//            if(arr[j] < arr[indexMin]){
//                indexMin = j;
//            }
//        }
// 
//        if(indexMin != i) {
//            printf("Trao doi phan tu: [ %d, %d ]\n" , arr[i], arr[indexMin]); 
// 
//            // Trao doi cac so 
//            int temp = arr[indexMin];
//            arr[indexMin] = arr[i];
//            arr[i] = temp;
//        }
// 
//        printf("Vong lap thu %d#:",(i+1));
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
//    selectionSort();
//    printf("-----------------------------\n");
//    printf("Mang sau khi da sap xep: ");
//    display();
//}

