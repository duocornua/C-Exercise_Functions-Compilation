#include <stdio.h>
#include <ctype.h>
int main()
{   int nVowels=0, nConsonants=0, nOthers=0;
	char ch;
	printf("Nhap day:");
	do {
		ch=getchar();
		ch=toupper(ch);
		if (ch>='A' && ch<='Z') {
			switch (ch){
				case 'A': 
				case 'E': 
				case 'I': 
				case 'O': 
				case 'U': 
				nVowels++; 
				break;
				default: nConsonants++;
			}
		}
		else nOthers++;
	}
	while (ch!='\n');
	printf("Number of Vowels: %d\n", nVowels);
    printf("Number of Consonant: %d\n", nConsonants);
    printf("Number of Others: %d\n", nOthers-1);
	return 0;
}
