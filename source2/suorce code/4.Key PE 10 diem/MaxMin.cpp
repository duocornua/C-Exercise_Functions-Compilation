#include <stdio.h>
#include <math.h>

//-----------------------------------------------------------------
/*
// min trong mang
int main() {
    int size;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int Arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &Arr[i]);
    }
    int min = Arr[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (Arr[i] < min) {
            min = Arr[i];
            minIndex = i;
        }
    }
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    printf("Vi tri cua gia tri nho nhat trong mang: Arr[%d]\n", minIndex);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// max trong mang
int main() {
    int size;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int Arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &Arr[i]);
    }
    int max = Arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (Arr[i] > max) {
            max = Arr[i];
            maxIndex = i;
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Vi tri cua gia tri lon nhat trong mang: Arr[%d]\n", maxIndex);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// max thu 2 trong mang
int main() {
    int size;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int Arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &Arr[i]);
        printf("Vi tri la: Arr[%d]", i);
        printf("\n\n");
    }
    int max = Arr[0];
    int maxIndex = 0;
    // tim max
    for (int i = 1; i < size; i++) {
        if (Arr[i] > max) {
            max = Arr[i];
            maxIndex = i;
        }
    }

    // Tim max thu 2
    int secondMax = Arr[0];
    int secondMaxIndex = -1; // khoi tao = -1 neu ko tim thay

    for (int i = 1; i < size; i++) {
        if (Arr[i] > secondMax && Arr[i] < max) {
            secondMax = Arr[i];
            secondMaxIndex = i;
        }
    }
    if (secondMaxIndex != -1) {
        printf("Gia tri lon nhat trong mang la: %d\n", max);
        printf("Vi tri cua gia tri lon nhat trong mang: Arr[%d]\n", maxIndex);

        printf("Gia tri lon thu hai trong mang la: %d\n", secondMax);
        printf("Vi tri cua gia tri lon thu hai trong mang: Arr[%d]\n", secondMaxIndex);
    } else {
        printf("Khong tim thay gia tri lon thu hai trong mang.\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// min thu 2 trong mang
int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array size should be at least 2 for finding second smallest element.\n");
        return 1; // Exit the program with an error code
    }

    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int smallest = a[0];
    int secondSmallest = a[1];

    if (a[0] > a[1]) {
        smallest = a[1];
        secondSmallest = a[0];
    }
    for (int i = 2; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }
    }
    printf("The second smallest element in the array is: %d\n", secondSmallest);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so chan lon nhat trong n so
#include <stdio.h>
#include<string.h>
int main () {
//	int size;
//	scanf("%d",&size);
	int i,Arr[5];
	for(i=0; i<5; i++)
		scanf("%d",&Arr[i]);
	int Max_even=-1;
	for(i=0; i<5; i++)
		if(Arr[i]>Max_even && Arr[i]%2==0)
			Max_even=Arr[i];
	//printf("OUTPUT:\n")
	printf("\nOUTPUT:\n%d",Max_even);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// in ra so chan lon thu 2 trong mang
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int Arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    bubbleSort(Arr, 5);

    int count = 0;
    int secondMaxEven = -1;

    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 == 0) {
            count++;
            if (count == 2) {
                secondMaxEven = Arr[i];
                break;
            }
        }
    }
    if (secondMaxEven != -1)
        printf("Second largest even number: %d\n", secondMaxEven);
    else
        printf("No second largest even number found.\n");
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so chan nho nhat trong n so
int main() {
    int Arr[5];
    printf("Nhap 5 so:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    int minEven = -1; 

    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 == 0) { 
            if (minEven == -1 || Arr[i] < minEven) {
                minEven = Arr[i];
            }
        }
    }
    if (minEven != -1) {
        printf("So chan nho nhat la: %d\n", minEven);
    } else {
        printf("Khong co so chan trong mang.\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so chan nho thu 2 trong n so
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int Arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    bubbleSort(Arr, 5);

    int count = 0;
    int secondMinEven = -1;
    
    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 == 0) {
            count++;
            if (count == 2) {
                secondMinEven = Arr[i];
                break;
            }
        }
    }
    if (secondMinEven != -1)
        printf("Second smallest even number: %d\n", secondMinEven);
    else
        printf("No second smallest even number found.\n");
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so le lon nhat trong n so
#include <stdio.h>
#include<string.h>
int main () {
//	int size;
//	scanf("%d",&size);
	int i,Arr[5];
	for(i=0; i<5; i++)
		scanf("%d",&Arr[i]);
	int Max_even=-1;
	for(i=0; i<5; i++)
		if(Arr[i]>Max_even && Arr[i]%2!=0)
			Max_even=Arr[i];
	//printf("OUTPUT:\n")
	printf("\nOUTPUT:\n%d",Max_even);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so le lon thu 2 trong n so
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int Arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    bubbleSort(Arr, 5);

    int count = 0;
    int secondMaxOdd = -1;

    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 != 0) {
            count++;
            if (count == 2) {
                secondMaxOdd = Arr[i];
                break;
            }
        }
    }
    if (secondMaxOdd != -1)
        printf("Second largest odd number: %d\n", secondMaxOdd);
    else
        printf("No second largest odd number found.\n");
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so le nho nhat trong n so
int main() {
    int Arr[5];
    printf("Nhap 5 so:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    int minOdd = -1;

    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 != 0) {  // Ki?m tra s? l?
            if (minOdd == -1 || Arr[i] < minOdd) {
                minOdd = Arr[i];
            }
        }
    }
    if (minOdd != -1) {
        printf("So le nho nhat la: %d\n", minOdd);
    } else {
        printf("Khong co so le trong mang.\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra so le nho thu 2 trong n so
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int Arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &Arr[i]);

    // S?p x?p m?ng tang d?n
    bubbleSort(Arr, 5);

    int count = 0;
    int secondMinOdd = -1;

    for (int i = 0; i < 5; i++) {
        if (Arr[i] % 2 != 0) {
            count++;
            if (count == 2) {
                secondMinOdd = Arr[i];
                break;
            }
        }
    }
    if (secondMinOdd != -1)
        printf("Second smallest odd number: %d\n", secondMinOdd);
    else
        printf("No second smallest odd number found.\n");

    return 0;
}
*/
//-----------------------------------------------------------------
