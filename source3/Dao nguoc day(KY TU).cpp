//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int Length(char s[])
//{
//	int i = 0;
//    while (s[i] != NULL)
//        ++i;
//    return i - 1;
//}
// 
// 
//void InDaoNguoc(char str[]){
//    int length = Length(str);
//    int i;
//    for ( i = length - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//}
//
//int main() {
//  system("cls");char s[100];
//    fgets(s, 100, stdin); // nên dùng hàm fgets
//  
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//
//
//    
//    InDaoNguoc(s);
//
//
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}


//#include<stdio.h>
//#include<string.h>
//void reverse (char []);
//main(){
//	char s[1001];
//	printf("Input string s ");
//	gets(s);
//	reverse(s);
//	printf("Output: %s ", s);
//	
//}
//void reverse (char s[]){
//	int i, n = strlen(s);
//	char c;
//	for (i=0; i<n-1-i; i++) { //viet tach ra cho de hieu
//		c = s[i];
//		s[i] = s[n-1-i];
//		s[n-i-1] = c;
//	}
//}



#include<stdio.h>
#include<string.h>

void reverse_words(char []);

int main(){
    char s[1001];
    printf("Nhap chuoi s: ");
    fgets(s, sizeof(s), stdin);
    reverse_words(s);
    printf("Ket qua: %s", s);
    return 0;
}

void reverse_words(char s[]){
    int length = strlen(s);
    int i, j;
    for (i = 0; i < length; i++) {
        if (s[i] == ' ') {
            continue; // n?u là kho?ng tr?ng thì b? qua
        }
        j = i;
        while (j < length && s[j] != ' ') {
            j++; // tìm v? trí k?t thúc c?a t? hi?n t?i
        }
        // d?o ngu?c t? hi?n t?i trong chu?i
        int start = i, end = j - 1;
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        i = j; // ti?p t?c tìm t? ti?p theo
    }
}
