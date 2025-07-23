#include <stdio.h>
main()
{
    int i,n,j,name,dem[100],a[100],max;

    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
         printf("a[%d] = ",i);
         scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
        dem[i]=1;


    for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
              if (a[i]==a[j])
                  dem[i]++;

    max=dem[0];
    name=a[0];

    for (i=1;i<n;i++)
         if (max<dem[i]) {max=dem[i];
                          name=a[i];}

    printf("Phan tu %d xuat hien nhieu nhat (%d lan)",name,max);}
