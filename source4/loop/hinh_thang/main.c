#include <stdio.h>

void print_hollow_parallelogram(int W, int H) {
    printf("The parallelogram which size is %dx%d:\n", W, H);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < (H - i - 1) * 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < W; j++) {
            if (i == 0 || i == H - 1) {
                printf("* ");
            } else {
                if (j == 0 || j == W - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

void print_filled_parallelogram(int W, int H) {
    printf("The filled parallelogram which size is %dx%d:\n", W, H);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < (H - i - 1) * 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < W; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int W, H;
    printf("Please enter the width W: ");
    scanf("%d", &W);
    printf("Please enter the height H: ");
    scanf("%d", &H);
    if (W > 0 && H > 0) {
        print_hollow_parallelogram(W, H);
        printf("\n");
        print_filled_parallelogram(W, H);
    } else {
        printf("Please enter positive integers for width and height.\n");
    }
    return 0;
}
