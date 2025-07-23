#include <stdio.h>

//-----------------------------------------------------------------
/*
// Tim tat ca cac uoc cua 1 so
void findFactors(int number) {
    printf("Uoc cua %d la:\n", number);
    
    int sqrt_number = (int)sqrt(number);
    // duyet
	for (int i = 1; i <= sqrt_number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
            // i la uoc 
            if (i != (number / i)) {
                printf("%d ", number / i);
            }
        }
    }
    printf("\n");
}

int main() {
    int number;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    findFactors(number);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Tim so luong boi cua 1 so
void findMultiples(int number, int numMultiples) {
    printf("Boi so cua %d la:\n", number);

    // Tìm và in ra numMultiples b?i s? c?a number
    for (int i = 1; i <= numMultiples; i++) {
        printf("%d ", number * i);
    }
    printf("\n");
}

int main() {
    int number, numMultiples;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    printf("Nhap so luong boi so can tim: ");
    scanf("%d", &numMultiples);

    findMultiples(number, numMultiples);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Dem tat ca cac uoc cua 1 so
int countFactors(int number) {
    int count = 0;

    int sqrt_number = (int)sqrt(number);
    for (int i = 1; i <= sqrt_number; i++) {
        if (number % i == 0) {
            count++;
            if (i != (number / i)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int number;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    int numFactors = countFactors(number);

    printf("So uoc cua %d la: %d\n", number, numFactors);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Tinh tong cac pphan tu trong mang
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", sum);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Dem so luong so nguyen am trong mang
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

    int countNegative = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            countNegative++;
        }
    }
    printf("So luong so nguyen am trong mang: %d\n", countNegative);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// dao nguoc 1 mang
void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    printf("Mang truoc khi dao nguoc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    reverseArray(arr, n);
    printf("Mang sau khi dao nguoc:\n");
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
// dao nguoc 1 so nguyen
int reverseInteger(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;

    printf("Nhap so nguyen can dao nguoc: ");
    scanf("%d", &num);

    int reversedNum = reverseInteger(num);
    printf("So nguyen sau khi dao nguoc: %d\n", reversedNum);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// loai bo trung lap
void removeDuplicates(int arr[], int *length) {
	int newSize = 0;
	int result[*length];

	for (int i = 0; i < *length; i++) {
		int isDuplicate = 0;

		for (int j = 0; j < newSize; j++) {
			if (arr[i] == result[j]) {
				isDuplicate = 1;
				break;
			}
		}
		if (!isDuplicate) {
			result[newSize] = arr[i];
			newSize++;
		}
	}
	for (int i = 0; i < newSize; i++) {
		arr[i] = result[i];
	}
	*length = newSize;
}


//// mang co dinh - bo comment ra dung nhe ae
//int main() {
//	int arr[] = {1, 2, 2, 3, 4, 4, 5};
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	printf("Mang ban dau: ");
//	for (int i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	removeDuplicates(arr, &length);
//
//	printf("Mang sau khi giam so luong trung: ");
//	for (int i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


// mang yeu cau nguoi dung nhap
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
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &n);
    printf("Mang sau khi giam so luong trung: ");
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
// Xoa cac phan tu la so le trung nhau
void removeDuplicateOdds(int arr[], int *size) {
    int newSize = 0;

    for (int i = 0; i < *size; i++) {
        int isOdd = arr[i] % 2 != 0;
        int isDuplicate = 0;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j] && isOdd) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isOdd || !isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize;
}

//int main() {
//    int arr[] = {1, 2, 3, 3, 4, 5, 5, 7, 7, 9};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("Original array: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    removeDuplicateOdds(arr, &size);
//
//    printf("Array after removing duplicate odd numbers: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicateOdds(arr, &n);
    printf("Array after removing duplicate odd numbers: ");
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
// Xoa cac phan tu la so chan trung nhau
void removeDuplicateEvens(int arr[], int *size) {
    int newSize = 0;

    for (int i = 0; i < *size; i++) {
        // Xác d?nh xem s? dó là s? ch?n và dã xu?t hi?n chua
        int isEven = arr[i] % 2 == 0;
        int isDuplicate = 0;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j] && isEven) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isEven || !isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicateEvens(arr, &n);
    printf("Array after removing duplicate even numbers: ");
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
// chèn 1 so vao mang o vi tri tu chon
void insertElement(int arr[], int *size, int position, int value) {
	if (position < 0 || position > *size) {
		printf("Invalid position for insertion.\n");
		return;
	}

	for (int i = *size; i > position; i--) {
		arr[i] = arr[i - 1];
	}
	arr[position] = value;
	(*size)++;
}

int main() {
	int n;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter the elements of the array:\n");
	for (int i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Original array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int position, value;
	printf("Enter the position to insert the element: ");
	scanf("%d", &position);
	printf("Enter the value to insert: ");
	scanf("%d", &value);

	insertElement(arr, &n, position, value);
	printf("Array after insertion: ");
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
// xoa phan tu tai vi tri duoc chon
void deleteElement(int arr[], int *size, int position) {
	if (position < 0 || position >= *size) {
		printf("Invalid position for deletion.\n");
		return;
	}
	for (int i = position; i < *size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	(*size)--;
}

int main() {
	int n;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Original array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int position;
	printf("Enter the position to delete the element: ");
	scanf("%d", &position);

	deleteElement(arr, &n, position);
	printf("Array after deletion: ");
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
#include <stdbool.h> // dung cai thu vien nay khi su dung ham nay nhe ae
// tat ca so nguyen to
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int n) {
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter khoang ma day snt duoc gioi han: ");
    scanf("%d", &n);
    
    printPrimes(n);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// in ra cac so nguyen to trong day so ma ae nhap vao
#include <stdbool.h>
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimesInArray(int arr[], int size) {
    printf("Prime numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printPrimesInArray(arr, n);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// chi in ra so nguyen to dau tien trong day so ma ae nhap vao
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printFirstPrime(int arr[], int size) {
    printf("The first prime number in the array: ");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d\n", arr[i]);
            return;  // Stop after printing the first prime
        }
    }
    printf("No prime number found in the array.\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printFirstPrime(arr, n);
    return 0;
}
*/
//-----------------------------------------------------------------
