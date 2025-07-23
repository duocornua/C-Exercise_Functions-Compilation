#include <stdio.h>
void bubblesort(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                double tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.4lf", a[i]);
        if (i < n - 1) {
            printf("-");
        }
    }
}
int main(){
    int n ;
    scanf("%d", &n);
    double a[n];
    for (int  i = 0; i < n ; i++)
    {
        scanf("%lf", &a[i]);
    }
    bubblesort(a,n);
    return 0;
}
