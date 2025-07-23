#include <stdio.h>
int main()
{
	int a[100000];
	int b[100000];
	int m,n;
	scanf("%d",&n);
	for (int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for (int i=0; i<m;i++)
	{
		scanf("%d",&b[i]);
	}
   int arr[m+n];
    
   int index = 0;
  
   for(int i = 0; i < n; i++) 
   {
      arr[index] = a[i];
      index++;
   }
   for(int i = 0; i < m; i++) 
   {
      arr[index] = b[i];
      index++;
   }
 
   for(int i = 0; i < m+n; i++)
      printf("%d ", arr[i]);
    
   return 0;
}
