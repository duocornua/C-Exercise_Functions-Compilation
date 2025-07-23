*
* *
* * *
* * * *
* * * * *

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

-----------------------------------------------
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}

-------------------------------------------------

A
B B
C C C
D D D D
E E E E E

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}

----------------------------------------------------

* * * * *
* * * *
* * *
* *
*

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

----------------------------------------------------

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}

-----------------------------------------------------

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

----------------------------------------------------

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

#include <stdio.h>
int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}

---------------------------------------------------

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
#include <stdio.h>
int main() {
   int rows, i, j, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}  

---------------------------------------------------
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1
 
//Pascal's Triangle
#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}

---------------------------------------------------
 
1
2 3
4 5 6
7 8 9 10

#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}

----------------------------------------------------

* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == j || j == 1 || j == n || i == n || i + j == n + 1)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

----------------------------------------------------

    *****
   *   *
  *   *
 *   *
*****

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

-----------------------------------------------------

    *
   ***
  *****
 *******
*********
***   ***
***   ***
***   ***

#include <stdio.h>

int main()
{
    int i, j, space, rows = 8, star = 0;

    /* Printing upper triangle */
    for (i = 0; i < rows; i++)
    {
        if (i < 5)
        {
            /* Printing upper triangle */
            for (space = 1; space < 5 - i; space++)
            {
                printf(" ");
            }
            /* Printing stars */
            while (star != (2 * i + 1))
            {
                printf("*");
                star++;
                ;
            }
            star = 0;
            /* move to next row */
            printf("\n");
        }
        else
        {
            /* Printing bottom walls of huts */
            for (j = 0; j < 9; j++)
            {
                if ((int)(j / 3) == 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

---------------------------------------------------

input n: 5
             *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
             
#include <stdio.h>

int main()
{
    int n;
    printf("input n: ");
    scanf("%d", &n);


    //thoi2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

----------------------------------------------------

 *  *  *  *  *  *  *  *  *  *
 *  *  *  *        *  *  *  *
 *  *  *              *  *  *
 *  *                    *  *
 *                          *
 *  *                    *  *
 *  *  *              *  *  *
 *  *  *  *        *  *  *  *
 *  *  *  *  *  *  *  *  *  *
 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

-----------------------------------------------------

Enter the number of columns5
    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****
	
#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter the number of columns");
    scanf("%d", &n);
    // printing the upper part of the pattern..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int k = 0; k <= n - i; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("   ");
        }
        for (int k = 1; k <= i + 1; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
-------------------------------------------------------

Enter the odd number only 5
       +
       +
 +  +  +  +  +
       +
       +

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the odd number only");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == ((n / 2) + 1))
        {
            for (int j = 1; j <= n; j++)
            {
                printf(" + ");
            }
        }
        else
        {
            for (int j = 1; j <= n / 2; j++)
            {
                printf("   ");
            }
            printf(" + ");
        }
        printf("\n");
    }
    return 0;
}

-----------------------------------------------------

              1
           1  2  1
        1  2  3  2  1
     1  2  3  4  3  2  1
 1   2  3  4  5  4  3  2  1

#include <stdio.h>
#include <math.h>

void tamGiacThuong(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j < 2 * h; j++)
        {
            if (abs(h - j) <= (i - 1))
            {
                printf("%3d", i - abs(h - j));
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int h;
    scanf("%d", &h);
    tamGiacThuong(h);
    return 0;
}

------------------------------------------------------

Enter the number of rows5
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
		
#include <stdio.h>
#include <stdlib.h>
int main() {

	int i,j,rows,space=0;
  	printf("Enter the number of rows");
	scanf("%d",&rows);//taking numer of rows from user

	for(i=rows; i>=1; i--){
            //outer for loop
        for(j=1; j<=space; j++)
        	printf("  ");
         	for(j=1; j<=i; j++)
        		printf("%d ",j);

         		for(j=i-1; j>=1; j--)
        			printf("%d ",j);
	printf("\n");
    space++;
    }
    return 0;
}

------------------------------------------------------

*
**
* *
*  *
*   *
*    *
*     *
********

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

-------------------------------------------------------

Enter the number of rows: 5
    *  *           *  *
 *  *  *  *     *  *  *  *
 *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
			 
#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    /* printing top semi circular shapes of heart */
    for (i = rows / 2; i <= rows; i += 2)
    {
        /* Printing Spaces */
        for (j = 1; j < rows - i; j += 2)
        {
            printf("   ");
        }
        /* printing stars for left semi circle */
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        /* Printing Spaces */
        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }
        /* printing stars for right semi circle */
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        /* move to next row */
        printf("\n");
    }

    /* printing inverted start pyramid */
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j < rows; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf(" * ");
        }
        /* move to next row */
        printf("\n");
    }

    return 0;
}

-------------------------------------------------------

* * * * * 
  *       
    *     
      *   
* * * * * 

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == j)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
----------------------------------------------------------

* * * * * 
  *   *   
    *     
  *   *   
* * * * * 

#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == j || i + j == n + 1)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

------------------------------------------------------

* * * * * 
 * * * * 
  * * * 
   * * 
    *
    
#include <stdio.h>
int main()
{
    int n;
    printf("Nhap chieu cao hinh tam giac: ");
    scanf("%d", &n);
     
    int i;
    for(i = 0; i < n; i++){
        int j;
       //Thay d?i s? bu?c l?p j d? d?o ngu?c h�nh tam gi�c
        for(j = n-i; j < n; j++){
            printf(" ");
        }
        for(j = i; j < n; j++){
            printf("* ");
        }
        printf("\n");
    }
}

-----------------------------------------------------

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

#include <stdio.h>

int main() {
    int m, n, i, j;

    m = 5;
    n = 6; 

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

---------------------------------------------------

********
*      *
*      *
*      *
******** 

#include <stdio.h>

int main() {
    int rows, columns, i, j;
    
    rows = 5;
    columns = 8;
    
    // Loop for rows
    for(i=1; i<=rows; i++) {
        // Loop for columns
        for(j=1; j<=columns; j++) {
            // Print the first or last row as stars
            if(i==1 || i==rows) {
                printf("*");
            }
            // Print the first or last column as stars
            else if(j==1 || j==columns) {
                printf("*");
            }
            // Print empty space for other rows and columns
            else {
                printf(" ");
            }
        }
        // Move to the next row
        printf("\n");
    }
    
    return 0;
}

-------------------------------------------------------

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    * 

#include <stdio.h>

int main() {
   int i, j, n;

   n = 5;

   for (i = 1; i <= n; i++) {
      for (j = 1; j <= n - i; j++)
         printf(" ");
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");
      printf("\n");
   }

   for (i = n - 1; i >= 1; i--) {
      for (j = 1; j <= n - i; j++)
         printf(" ");
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");
      printf("\n");
   }

   return 0;
}

-----------------------------------------------------------
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
#include <stdio.h>

int main() {
   int i, j, n;

   n = 5;

   for (i = 1; i <= n; i++) {
      for (j = 1; j <= n - i; j++)
         printf(" ");
      for (j = 1; j <= 2 * i - 1; j++) {
         if (j == 1 || j == 2 * i - 1)
            printf("*");
         else
            printf(" ");
      }
      printf("\n");
   }

   for (i = n - 1; i >= 1; i--) {
      for (j = 1; j <= n - i; j++)
         printf(" ");
      for (j = 1; j <= 2 * i - 1; j++) {
         if (j == 1 || j == 2 * i - 1)
            printf("*");
         else
            printf(" ");
      }
      printf("\n");
   }

   return 0;
}
  
------------------------------------------------------
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
//Draw a rhombus with the main diagonal length entered from the keyboard
#include <stdio.h>

int main() {
    int length, i, j, k;
    
    length = 5;
    
    // The upper half of the diamond
    for(i=1; i<=length; i++) {
        // Print spaces before the stars
        for(j=i; j<length; j++) {
            printf(" ");
        }
        // Print the stars
        for(k=1; k<=(2*i-1); k++) {
            printf("*");
        }
        // Move to the next row
        printf("\n");
    }
    
    // The lower half of the diamond
    for(i=length-1; i>=1; i--) {
        // Print spaces before the stars
        for(j=length-1; j>=i; j--) {
            printf(" ");
        }
        // Print the stars
        for(k=1; k<=(2*i-1); k++) {
            printf("*");
        }
        // Move to the next row
        printf("\n");
    }
    
    return 0;
}

------------------------------------------------

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA

int main() {
int i, j, rows, count=0;
printf("Enter the number of rows\n");
scanf("%d", &rows);
for (i = 0; i < 2*rows; i=i+2) {
for (j = 0; j <= i; j++) {
printf("%c", 'A'+count);
if(j < i/2)
count++;
else
count--;
}
count = 0;
printf("\n");
}
return(0);
}

----------------------------------------------------


