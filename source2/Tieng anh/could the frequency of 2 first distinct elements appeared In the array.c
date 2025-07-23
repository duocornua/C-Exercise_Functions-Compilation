#include <stdio.h>

int main() {
   int arr[7], freq[7], i, j, count = 0;

   printf("Nhap mang gom 7 phan tu:\n ");
   for (i = 0; i < 7; i++) {
      scanf("%d", &arr[i]);
      freq[i] = -1;
   }

   for (i = 0; i < 7; i++) {
      count = 1;
      for (j = i + 1; j < 7; j++) {
         if (arr[i] == arr[j]) {
            count++;
            freq[j] = 0;
         }
      }
      if (freq[i] != 0) {
         freq[i] = count;
      }
   }

   for (i = 0; i < 7; i++) {
      if (freq[i] != 0) {
         for (j = i + 1; j < 7; j++) {
            if (arr[i] != arr[j] && freq[j] != 0) {
               printf("Hai phan tu khac nhau dau tien la %d va %d\n", arr[i], arr[j]);
               printf("Tan suat cua chung la %d %d, %d %d\n", freq[i], arr[i], freq[j], arr[j]);
               return 0;
            }
         }
      }
   }

   printf("Khong co hai phan tu khac nhau trong mang.\n");
   return 0;
}

