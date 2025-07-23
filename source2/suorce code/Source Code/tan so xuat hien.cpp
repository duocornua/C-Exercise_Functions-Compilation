#include<stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
 int a[MAX], n, dem;
 do{
  printf("so luong phan tu: ");
  scanf("%d",&n);
 }while(n<=0||n>MAX);
 for(int i=0;i<n;i++)
 {
  printf("a[%d] = ",i);
  scanf("%d",&a[i]);
 }
 printf("day so: ");
 for(int i=0;i<n;i++)
  printf("%4d",a[i]);
 for(int i=0;i<n;i++)
 {
  dem=0;
  for(int j=0;j<n;j++)
   if(a[i]==a[j])
    if(i<=j)
     dem++;
    else
     break;
  if(dem!=0)
   printf("\ntan suat xuat hien cua %d la %d lan",a[i],dem);
 }
 getch();
}
