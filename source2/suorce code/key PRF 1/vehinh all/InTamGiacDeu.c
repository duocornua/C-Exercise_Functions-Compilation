/*
Input
Enter number of rows: 5
			*
		   * *
		  * * *
		 * * * *
	    * * * * *
Output  
*/

#include <stdio.h>

int main() {
   int n;
	scanf("%d",&n);
   for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            if (j%2==0)printf("1");
            else printf("0");

    printf("\n");
   }
   return 0;
}
