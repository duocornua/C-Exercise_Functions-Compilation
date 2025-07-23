#include <stdio.h>

//-----------------------------------------------------------------
/*
// bubble sort tang dan
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
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);
    printf("Mang sau khi sap xep tang dan:\n");
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
// bubble sort giam dan
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // So sánh d? s?p x?p gi?m d?n
                // Hoán d?i gi?a arr[j] và arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);
    printf("Mang sau khi sap xep giam dan:\n");
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
// insertionSort sort giam dan
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);
    printf("Mang sau khi sap xep giam dan:\n");
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
// insertionSort sort tang dan
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Mang sau khi sap xep tang dan:\n");
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
// selectionSort sort tang dan
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("M?ng tru?c khi s?p x?p:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);
    printf("Mang sau khi sap xep tang dan:\n");
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
// selectionSort sort giam dan
void selectionSort(int arr[], int n) {
    int i, j, max_idx;

    for (i = 0; i < n - 1; i++) {
        max_idx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);
    printf("Mang sau khi sap xep giam dan:\n");
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
// In ra so chan tai vi tri chan va sort
#include <stdio.h>
void printsx(int A[], int* n) {
	int *adds[*n];
	int i,j;
	int* temp;
	for(i=0; i<*n; i++) {
		adds[i]=&A[i];
	}
	for(j=0; j<*n-1; j++) {
		if(adds[j]>adds[j+1]) {
			temp=adds[j];
			adds[j]=adds[j+1];
			adds[j+1]=temp;
		}
	}
	for (i = 0; i < *n; i++) {
		if(*adds[i]%2==0 && i%2==0 && i!=0)
			printf("%d\t", *adds[i]);
	}
}

int main() {
	int i,size;
	scanf("%d",&size);
	int Arr[size];
	Arr[0]=size;
	for(i=1; i<size; i++)
		scanf("%d",&Arr[i]);
	printsx(Arr,&size);

	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Sap xep mang TANG DAN, tang dan so LE sau do so CHAN
void separateOddEven(int arr[], int n, int oddArr[], int *oddCount, int evenArr[], int *evenCount) {
	*oddCount = 0;
	*evenCount = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			evenArr[(*evenCount)++] = arr[i];
		else
			oddArr[(*oddCount)++] = arr[i];
	}
}

void sortArray(int arr[], int n) {
	int temp;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int n;

	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	int arr[n];

	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int oddArr[n], evenArr[n];
	int oddCount, evenCount;

	separateOddEven(arr, n, oddArr, &oddCount, evenArr, &evenCount);

	sortArray(oddArr, oddCount);
	sortArray(evenArr, evenCount);

	int i, j;
	for (i = 0; i < oddCount; i++)
		arr[i] = oddArr[i];
	for (j = 0; j < evenCount; j++)
		arr[i++] = evenArr[j];

	printf("Mang sau khi sap xep (so le truoc so chan):\n");
	for (int k = 0; k < n; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n");

	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Sap xep mang TANG DAN, tang dan so CHAN sau do so LE
void separateOddEven(int arr[], int n, int oddArr[], int *oddCount, int evenArr[], int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenArr[(*evenCount)++] = arr[i];
        else
            oddArr[(*oddCount)++] = arr[i];
    }
}

void sortArray(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int oddArr[n], evenArr[n];
    int oddCount, evenCount;

    separateOddEven(arr, n, oddArr, &oddCount, evenArr, &evenCount);

    sortArray(evenArr, evenCount);
    sortArray(oddArr, oddCount);

    int i = 0;
    for (int j = 0; j < evenCount; j++)
        arr[i++] = evenArr[j];
    for (int k = 0; k < oddCount; k++)
        arr[i++] = oddArr[k];

    printf("Mang sau khi sap xep (so chan truoc so le):\n");
    for (int l = 0; l < n; l++) {
        printf("%d ", arr[l]);
    }
    printf("\n");
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Sap xep mang GIAM DAN, giam dan so CHAN sau do so LE
void separateOddEven(int arr[], int n, int oddArr[], int *oddCount, int evenArr[], int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenArr[(*evenCount)++] = arr[i];
        else
            oddArr[(*oddCount)++] = arr[i];
    }
}

void sortArray(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int oddArr[n], evenArr[n];
    int oddCount, evenCount;

    separateOddEven(arr, n, oddArr, &oddCount, evenArr, &evenCount);

    sortArray(evenArr, evenCount);
    sortArray(oddArr, oddCount);

    int i = 0;
    for (int j = 0; j < evenCount; j++)
        arr[i++] = evenArr[j];
    for (int k = 0; k < oddCount; k++)
        arr[i++] = oddArr[k];

    printf("Mang sau khi sap xep (so chan truoc so le, giam dan):\n");
    for (int l = 0; l < n; l++) {
        printf("%d ", arr[l]);
    }
    printf("\n");

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Sap xep mang GIAM DAN, giam dan so LE sau do so CHAN
void separateOddEven(int arr[], int n, int oddArr[], int *oddCount, int evenArr[], int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenArr[(*evenCount)++] = arr[i];
        else
            oddArr[(*oddCount)++] = arr[i];
    }
}

void sortArray(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int oddArr[n], evenArr[n];
    int oddCount, evenCount;

    separateOddEven(arr, n, oddArr, &oddCount, evenArr, &evenCount);

    sortArray(oddArr, oddCount);
    sortArray(evenArr, evenCount);

    int i = 0;
    for (int k = 0; k < oddCount; k++)
        arr[i++] = oddArr[k];
    for (int j = 0; j < evenCount; j++)
        arr[i++] = evenArr[j];

    printf("Mang sau khi sap xep (so le truoc so chan, giam dan):\n");
    for (int l = 0; l < n; l++) {
        printf("%d ", arr[l]);
    }
    printf("\n");
    return 0;
}
*/
