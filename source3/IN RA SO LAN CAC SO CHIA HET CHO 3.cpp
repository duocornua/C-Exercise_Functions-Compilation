#include <stdio.h>
int countMap[100001];  
int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 100001; i++)
    {
        countMap[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {   

            countMap[arr[i]]++;
        }
    }
    printf("So lan xuat hien cua cac so chia het cho 3:\n");
    for (int i = 0; i < 100001; i++)
    {   
        if(countMap[i] != 0){
        printf("%d: %d\n", i, countMap[i]);
        }
    }
    return 0;
}
