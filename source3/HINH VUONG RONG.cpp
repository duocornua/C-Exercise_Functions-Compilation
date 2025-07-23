//#include <stdio.h>
//
//int main() {
//    int side, i, j;
//
//    printf("Enter the side length of the square: ");
//    scanf("%d", &side);
//
//    for (i = 0; i < side; i++) {
//        for (j = 0; j < side; j++) {
//            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) {
//                printf("* ");
//            } else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}




#include <stdio.h>
void Square(int n)
{
    char S[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                S[i][j] = '*';
            }
            else
                S[i][j] = ' ';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", S[i][j]);
        }
        printf("\n");
    }
}
int main (){
    int n ;
    printf("Input n : ");
    scanf("%d", &n);
    Square(n);
}
