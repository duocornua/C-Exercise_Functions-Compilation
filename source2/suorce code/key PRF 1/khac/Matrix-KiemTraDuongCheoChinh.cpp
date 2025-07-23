#include<stdio.h>
#include<conio.h>
main()
{
    int a[10][10];
    int i,j,n, max;
    printf("Nhap n= ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          {
            scanf("%d",&a[i][j]);
        }
    }
//tim phan tu lon nhat tren duong cheo chinh
    max=a[0][0];
    for(i=0;i<n;i++)
    {
        if(a[i][i]>max)
        {
            max=a[i][i];
        }
    }    
    printf("\ngia tri lon nhat tren duong cheo chinh la %d", max);
// kiem tra ma tran vua nhap co phai ma tran don vi
    int kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(((i==j)&&(a[i][j]!=1))||((i!=j)&&(a[i][j]!=0)))
            {
                kt=1;
            }
        }
    }
    if(kt==0)
    {
        printf("\nla ma tran don vi");
    }
    else        
    {
        printf("\nkhong phai la ma tran don vi");
    }
    getch();
}
