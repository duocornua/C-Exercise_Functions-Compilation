#include <stdio.h>
#include <ctype.h>
int main(){
	char ch;
	int nVowels=0, nConsonants=0, nOthers=0;
	printf("Input a string: ");
	do {	
 		ch=getchar();
 		ch=toupper(ch);
		if (ch>='A' && ch<='Z'){
			switch (ch){
				case 'A' :
					nVowels+=1;
					break;
				case 'E' :
					nVowels+=1;
					break;
				case 'I' :
					nVowels+=1;
					break;
				case 'O' :
					nVowels+=1;
					break;
				case 'U' :
					nVowels+=1; 
					break;
				default:  
					nConsonants+=1;
					break;
			}	
		}else{
			nOthers=nOthers+=1;
		}
	}while (ch!='\n');
	printf("nVowels: %d\n", nVowels);
	printf("nConsonants: %d\n", nConsonants);
	printf("nOthers: %d\n", nOthers);
	return 0;
}

