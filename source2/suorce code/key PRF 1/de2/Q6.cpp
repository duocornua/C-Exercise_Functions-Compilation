#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	
	char t[100][30];
	int h=0,d=0,k=0;
	
	for(int i = 0; i < strlen(s); ++i) 
	{
        if(s[i] != ' ' && s[i] != '\0') 
		{
            t[h][d++] = s[i];
        }
        else {
			h++;
			d = 0;
		}
    }
    
	for (int i=0;i<=h;i++)
    {
    	if (t[i][strlen(t[i])-2]=='l' && t[i][strlen(t[i])-1]=='a')
    		k=k+1;
	}
	printf("%d",k);
}
		
		
