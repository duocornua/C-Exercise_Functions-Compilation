#include <stdio.h>
#include <stdlib.h>
int find_max(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}
int find_second_max_allow_duplicates(int a[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int max = a[0], count_max = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            count_max = 1;
        } else if (a[i] == max) {
            count_max++;
        }
    }

    if (count_max >= 2) return max;

    int second_max = INT_MIN;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < max && a[i] > second_max) {
            second_max = a[i];
            found = 1;
        }
    }

    if (!found) {
        printf("No second biggest value found.\n");
        return -1;
    }

    return second_max;
}

int main() {
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    m=find_second_max_allow_duplicates(a,n);
    printf("%d",m);

	return 0;
}
