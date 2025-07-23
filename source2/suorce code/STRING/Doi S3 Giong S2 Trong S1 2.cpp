#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	char a[101];
	char b[101];
	gets(s);
	scanf("%s",&a);
	scanf("%s",&b);	
	char t[100][101];
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
    for (int i=h;i>=0;i--)
    {
    	bool kt=true; 
    	if (strlen(a)!=strlen(t[i]))
    	{
    		continue;
    	}
    	for (int j=0;j<strlen(a);j++)
    	{
    		if (a[j]!=t[i][j])
    		{
    			kt=false;
    			break;
    		}
    	}
    	if (kt==true) 
		{
			strcpy(t[i],b);
			break;
		}
    }
    for (int i=0;i<=h;i++)
	{
	printf("%s ",t[i]);
	}   	
}
	
