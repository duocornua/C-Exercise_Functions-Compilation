#include <stdio.h>

int main() {
  int n;

  printf("Please enter a positive integer N: ");
  scanf("%d", &n);

  // Print the top half of the diamond
  for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }

    // Print stars
    for (int j = 1; j <= 2 * i - 1; j++) {
      if (j == 1 || j == 2 * i - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  // Print the bottom half of the diamond
  for (int i = n - 1; i >= 1; i--) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }

    // Print stars
    for (int j = 1; j <= 2 * i - 1; j++) {
      if (j == 1 || j == 2 * i - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
