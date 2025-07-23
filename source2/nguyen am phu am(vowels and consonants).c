#include<stdio.h>
#include<conio.h> 
void main()
{
	char ch;
	printf("\nNhap vao mot ky tu (A-Z hoac a-z): ");
	scanf("%c",&ch);
	if(ch<'A' || ch>'z'|| (ch>'Z' && ch<'a'))
	{
		printf("\nKy tu nhap vao khong nam trong bang chu cai tieng Anh!");
	}
	else
	{
		switch(ch)
		{
			case 'a':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'A':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'e':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'E':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'i':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'I':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'o':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'O':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'u':
				printf("\n'%c' la nguyen am!",ch);
				break;
			case 'U':
				printf("\n'%c' la nguyen am!",ch);
				break;
			default:
				printf("\n'%c' la phu am!",ch);
				break;
		}
	}
	getch();
}
