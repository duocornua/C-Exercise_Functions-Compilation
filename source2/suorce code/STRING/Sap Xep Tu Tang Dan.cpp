#include<stdio.h>
#include<string.h>
void SortName(char a[][30],int size)
{
	int i,j;
	for (int i=0;i<size;i++)
	{
		for (int j=i+1;j<size;j++)
		{
			if (strcmp(a[i], a[j]) > 0) 
			{
				char t[30];
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
}
int main()
{
	char a[5][30];
	int i;
	for (int i=0;i<5;i++)
	{
		fflush(stdin);
		scanf("%[^\n]",a[i]);
	}
	SortName(a,5);
	for(int i=0;i<5;i++)
	{
		printf("%s",a[i]);
		if (i<5-1) printf(" ");
	}
}
