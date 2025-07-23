#include<stdio.h>

int main()
{
	long int n,sum=0,r;

	printf("Nhap mot so bat ky = \n");
	scanf("%ld",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	while(n>0)
	{
		r=n%10;
		switch(r)
		{
			case 1:
				printf("mot ");
				break;
			case 2:
				printf("hai ");
				break;
			case 3:
				printf("ba ");
				break;
			case 4:
				printf("bon ");
				break;
			case 5:
				printf("nam ");
				break;
			case 6:
				printf("sau ");
				break;
			case 7:
				printf("bay ");
				break;
			case 8:
				printf("tam ");
				break;
			case 9:
				printf("chin ");
				break;
			case 0:
				printf("khong ");
				break;
			default:
				printf("\nVietJack xin chao cac ban!");
				break;
		}
		n=n/10;
	}
	return 0;
}

