#include <stdio.h>
#include <time.h>
#include <math.h>
    int intRandom(int a, int b) 
	{
    return (a+rand() % (b-a+1));
    }
    int main()
{
	srand(time(0));
	int total, x, y, count;
    printf("Nguoi nem xuc xac!\n==================\n");    
    do{
    	printf("Nhap tong so: ");
    	scanf("%d",&total);
    	if (total<2 || total>12)
		printf ("Tong so phai la 1 so nguyen trong pham vi [2..12]!!!\n");
	} while (total<2 || total>12);
	count = 1;
	do{
		x= intRandom(1,6);
		y= intRandom(1,6);
		printf("Ket qua nem lan thu %d : %d + %d\n", count, x, y);
		count++;
	} while(x+y!=total);
	printf("Ban da co tong so cua ban trong %d lan nem!", count);
}
