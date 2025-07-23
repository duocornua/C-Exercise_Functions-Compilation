#include <stdio.h>
#include <string.h>
int main()
{
    char s[100][25], x[25];
    int n,d=0;
    scanf("%d\n",&n);
    for(int i = 0; i < n; ++i) 
	{
        gets(s[i]);
    }
    for (int i=0;i<n;i++)
    {
    	if (s[i][0]=='h' && s[i][strlen(s[i])-1]=='g') d=d+1;
	}
	printf("%d",d);
return 0;
}
