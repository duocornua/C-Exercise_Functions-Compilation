#include<stdio.h>
#include<string.h>
void fun(char s[])
 {
int tc;
char ArrWords[30][30]; 
char s1[strlen(s)];
	strcpy(s1,s);
int wordcount=0;
	for (int i=strlen(s1); i>=0; i--)
	{
		if (s1[i]==' ')
		{
		strcpy(ArrWords[wordcount++],&s1[i+1]);
		s1[i]=0; 
		}
	}
	strcpy(ArrWords[wordcount++],s1);

	if (tc==1)
	{
		for (int i=0; i<wordcount; i++)
			for (int j=0; j<wordcount-i-1; j++)
				if (strcmp(ArrWords[j],ArrWords[j+1])>0)
				{
					char temp[30];
					strcpy(temp,ArrWords[j]);
					strcpy(ArrWords[j],ArrWords[j+1]);
					strcpy(ArrWords[j+1],temp);
				}
		strcpy(s1,""); 
		for (int i=0; i<wordcount; i++)
		{
			strcat(s1,ArrWords[i]);
			if (i<wordcount-1) strcat(s1," ");
		}
		strcpy(s,s1);
		}			
	else
	{
		for (int i=0; i<strlen(s); i++)
			if (s[i]==' ')
		{
				strcpy(s,&s[i+1]);
				break;
		}
		for (int i=strlen(s); i>=0; i--)
			if (s[i]==' ')
			{
				s[i]=0;
				break;
			}
	}
	printf("%s",s);
}
int main()
{
	char c[100];

	gets(c);

	fun(c);
	return 0;
}
	


