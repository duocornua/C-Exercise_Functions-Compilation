#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
  	char s[101];
	gets(s);
	int i;
	for ( i=0;i<strlen(s);i++)
	{
		if (((s[i]=='a') || (s[i]=='o') || (s[i]=='u') || (s[i]=='i') || (s[i]=='e')) && (s[i]>='a') && (s[i]<='z'))
		{
			s[i]=s[i]-32;
		}
		else if (((s[i]=='a') || (s[i]=='o') || (s[i]=='u') || (s[i]=='i') || (s[i]=='e')) && (s[i]>='A') && (s[i]<='Z'))
		{
			s[i]=s[i];
		}
	 	else if (((s[i]!='a') && (s[i]!='o') && (s[i]!='u') && (s[i]!='i') && (s[i]!='e')) &&  (s[i]>='A') && (s[i]<='Z'))
		{
			s[i]=s[i]+32;
		}
		else if (((s[i]!='a') && (s[i]!='o') && (s[i]!='u') && (s[i]!='i') && (s[i]!='e')) &&  (s[i]>='a') && (s[i]<='z'))
		{
			s[i]=s[i];
		}
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  puts(s);


  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
