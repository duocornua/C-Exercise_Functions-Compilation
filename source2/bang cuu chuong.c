#include<stdio.h>
#include<math.h>
void bangcuuchuong(int i)
{
	int j;
	for(j=1; j<=10;j++)
	{
		printf("%d x %d = %d\n",i,j, i*j);
	}
}
int main() {
	int i;
	scanf("%d",&i);
	bangcuuchuong(i);
}
