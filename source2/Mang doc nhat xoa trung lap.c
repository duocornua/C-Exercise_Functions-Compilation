//X�a t?t c? c�c ph?n t? tr�ng nhau trong m?ng v� ch? gi? l?i duy nh?t 1 ph?n t?.

#include <stdio.h>

int main() {
    int arr[100], unique[100], size, count = 0, flag;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        flag = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("The array with unique elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

