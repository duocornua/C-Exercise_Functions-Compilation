#include <stdio.h>

int main() {
  int n;
  printf("Please enter a positive integer N: ");
  scanf("%d", &n);

  // Top part of the diamond
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  // Bottom part of the diamond
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < n - i - 1; j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
