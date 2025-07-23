#include<stdio.h>#include <stdio.h>
#include <time.h>
#include <math.h>
    int intRandom(int min, int max) 
	{
    return (min+rand() % (max-min+1));
    }
    int main()
{
	srand(time(0));
	int total, x, y, count;
    printf("Xo so bong!\n===========\n");    
    do{
    	printf("Nhap tong so: ");
    	scanf("%d",&total);
    	if (total<2 || total>20)
		printf ("Tong so phai la 1 so nguyen trong pham vi [2..12]!!!\n");
	} while (total<2 || total>20);
	count = 0;
	do{
		x= intRandom(1,10);
		y= intRandom(1,10);
		printf("Ket qua chon lan thu %d va %d : %d + %d\n", count++, ++count, x, y);
	} while(x+y!=total);
	printf("Ban da co tong so cua ban trong %d lan chon!", count);
}
