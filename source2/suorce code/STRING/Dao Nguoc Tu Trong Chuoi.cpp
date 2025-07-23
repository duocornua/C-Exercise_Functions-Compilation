#include <stdio.h>
#include<string.h>
void reverse(char name[])
{
	char kq[100];
	int d=0;
	for (int i=strlen(name)-1;i>=0;i--)
	{
		kq[d]=name[i];
		d++;
	}
	kq[d]='\0';
	puts(kq);
}
int main()
{
	char s[101];
	scanf("%[^\n]",&s);
		
	char t[100][30];
	int h=0,d=0,k=0;
	
	for(int i = 0; i < strlen(s); ++i) 
	{
        if(s[i] != ' ' && s[i] != '\0') 
		{
            t[h][d] = s[i];
            d++;
        }
        else {
        	t[h][d]='\0';
			h++;
			d = 0;
		}
    }
    t[h][d]='\0';
    for(int i = 0; i<=h; ++i) 
	{
		reverse(t[i]);
	}
}
    
