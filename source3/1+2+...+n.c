//Tính tông: 1+2+3+...+n
#include<stdio.h>

int main ()
{
	int n;
	printf ("Nhap so tu nhien n=");
	scanf ("%d", &n);
	int sum = 0;
	int i;
	for ( i=1 ; i <= n ; i++ )
	sum += i;
	printf ("tong la: %d", sum);
	
	return 0;
}

