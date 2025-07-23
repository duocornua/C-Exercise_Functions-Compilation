#include <stdio.h>
#include <stdbool.h>
 
#define MAX 10
 
int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
 
//ham sap xep
void shellSort(){
    int inner, outer;
    int valueToInsert;
    int interval = 1;
    int elements = MAX;
    int i = 0;
     
    while(interval <= elements / 3) {
        interval = interval * 3 + 1;
    }
 
    while(interval > 0) {
        for(outer = interval; outer < elements; outer++) {
            valueToInsert = arr[outer];
            inner = outer;
 
            while(inner > interval -1 && arr[inner - interval] 
                >= valueToInsert) {
                arr[inner] = arr[inner - interval];
                inner -= interval;
                printf(" Di chuyen phan tu :%d\n",arr[inner]);
            }
             
            arr[inner] = valueToInsert;
            printf(" Chen phan tu: %d, tai vi tri: %d\n", valueToInsert, inner);
        }
 
        interval = (interval -1) /3;
        i++;
 
        printf("Vong lap thu %d#:", i); 
        display();
    }
}
 
void display() {
     int i;
     printf("[");
 
     // Duyet qua tat ca phan tu
     for(i = 0; i < MAX; i++) {
          printf("%d ", arr[i]);
     }
 
     printf("]\n");
}
 
main() {
    printf("Mang du lieu dau vao: ");
    display();
    printf("-----------------------------\n");
    shellSort();
    printf("-----------------------------\n");
    printf("Mang sau khi da sap xep: ");
    display();;
}
