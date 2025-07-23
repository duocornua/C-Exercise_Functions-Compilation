#include <stdio.h>
#include <string.h>

//-----------------------------------------------------------------
/*
// Tinh do dai cua 1 chuoi khong tinh khoang trang
int string_length(char s[]) {
    int i = 0;

    while (s[i] != '\0')
        i++;
    return i;
}

int main() {
    char n[100];
    printf("Enter string n: ");
    scanf("%s", n);

    int length = string_length(n);
    printf("Length of the string: %d\n", length);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// dao nguoc chuoi duoc nhap vao khong tinh khoang trang
void reverseString(char s[]) {
    int length = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at positions i and j
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Den so luong number trong chuoi
int main () {
	char str[100];
	printf("Please enter a string:");
	gets(str);
	int i,count=0;
	int len;
	len=strlen(str);
	for(i=0; i<len; i++) {
		if(str[i]>48 && str[i]<57)
			count++;
	}
	printf("%d",count);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra ky tu viet hoa at position odd
int main() {
	char str[100];
	scanf("%s",&str);
	int i,len=strlen(str);
	for(i=0; i<len; i++)
		if(i%2!=0) str[i]-=32;
	printf("%s",str);
	return (0);
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// In ra cac ky tu la chu da loai bo khoang trang
#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	scanf("%[^\n]",&str);
	int i,len;
	len=strlen(str);
	printf("\nOUTPUT:\n");
	for(i=0; i<len; i++) {
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
			printf("%c",str[i]);
	}
	return (0);
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Viet hoa 1/2 length string ve sau co tinh khonag trang
#include <stdio.h>
#include<string.h>
int main() {
	char str[200];
	printf("Enter a string: ");
	scanf("%[^\n]",&str);
	int i,n=strlen(str)/2;
	{
		for(i=0; i<n; i++);
		if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
		for(i=n; i<strlen(str); i++)
			if(str[i]>='a' && str[i]<='z')
				str[i]-=32;
	}
	puts(str);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// xoa 1 phan tu tai vi tri ma nguoi dung nhap vao
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int i,size;
	srand(time(NULL));
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int A[size];
	for(i=0; i<size; i++) {
		A[i]=rand()%51-rand()%30;
	}
	for(i=0; i<size; i++)
		printf("%d\t", A[i]);

	int pos;
	printf("\nEnter the position to remove an element: ");
	scanf("%d", &pos);
	if(pos>=0 && pos<size) {
		int value=A[pos];
		for(i=pos; i<size; i++)
			A[i]=A[i+1];
		size--;
		printf("\nThe array after removing element %d at position %d:\n",value,pos);
		for(i=0; i<size; i++) printf("%d\t", A[i]);

	} else {
		printf("\nCannot remove the element at %d, plz check range !", pos);
		printf("\nThe origin array:\n");
		for(i=0; i<size; i++) printf("%d\t", A[i]);
	}
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//chuyen cac ki tu viet hoa thanh ki tu viet thuong
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
	int i;
	char str[MAX_LENGTH + 1];
	int len;

	printf("Enter a string (maximum length %d): ", MAX_LENGTH);
	fgets(str, MAX_LENGTH + 1, stdin);

	len = strlen(str);
	if (str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}

	for (i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + ('a' - 'A');
		}
	}

	printf("%s\n", str);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//-------------------------------------------
//chu cai dau cua moi chu trong chuoi thanh in hoa
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str[100];
	printf("Enter a string with a maximum length of 100 characters: ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	if (len > 0 && str[len-1] == '\n') {
		str[--len] = '\0';
	}
	for (int i = 0; i < len; i++) {
		if (i == 0 || isspace(str[i-1])) {
			str[i] = toupper(str[i]);
		} else if (i == 1 || (i > 1 && !isalpha(str[i-2]) && isspace(str[i-1]))) {
			str[i] = toupper(str[i]);
		}
	}
	printf("The modified string is: %s\n", str);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//In ra tu dai nhat trong xau
void q_longestWord(char s[]) {
	int i = 0, start = 0, lmax = 0, lcurrent = 0;

	while (s[i] != '\0') {
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
			if (lcurrent > lmax) {
				lmax = lcurrent;
				start = i - lmax;
			}
			lcurrent = 0;
		} else {
			lcurrent++;
		}
		i++;
	}
	if (lcurrent > lmax) {
		lmax = lcurrent;
		start = i - lmax;
	}
	printf("Longest word: \"");
	for (i = start; i < start + lmax; i++) {
		printf("%c", s[i]);
	}
	printf("\"\n");
}

int main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	q_longestWord(str);

	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Xoa ky tu theo vi tri tu trai den phai cua 1 string
void deleteString(char s[], int l, int r) {
	int len = strlen(s);

	if (r >= len || l < 0 || l > r) {
		printf("Invalid positions.\n");
		return;
	}

	for (int i = r + 1; i <= len; i++) {
		s[i - r + l - 1] = s[i];
	}
}

int main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	int l, r;
	printf("Enter positions to delete (left to right): ");
	scanf("%d %d", &l, &r);

	deleteString(str, l, r);
	printf("Modified string: %s\n", str);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Don gian la tao 1 string moi lay tu do dai vi tri c?a tring tu trai qua phai the thoi
void copyString(char s2[], char s1[], int l, int r) {
    int i;

    for (i = l; i <= r; i++) {
        s2[i - l] = s1[i];
    }
    s2[r - l + 1] = '\0'; // Ð?t ký t? k?t thúc chu?i
}

int main() {
    char str1[100], str2[100];
    int l, r;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter positions to copy (left and right): ");
    scanf("%d %d", &l, &r);

    copyString(str2, str1, l, r);
    printf("Copied string: %s\n", str2);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// xoa space khi nhap chuoi vao ok
void removeSpaces(char *str) {
    int i = 0, j = 0;

    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);
    printf("Modified string: %s\n", str);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//Tach xau thanh cac tu, luu vao mang arrS[][]
void splitString(char arrS[][64], char s[]) {
	int mark[64];
	int i=0, count=0;

	while (s[i]==' ') i++;
	mark[0]=i;

	for (i=i; s[i]!=0; i++) {
		if (s[i]!=' ' && s[i-1]==' ') {
			mark[++count]=i;
		}
	}
	arrS[count+1][0]=0;
	while (count>=0) {
		int x= mark[count];
		int j= 0;
		while (s[x]!=' ' && s[x]!='\0') {
			arrS[count][j]=s[x];
			j++;
			x++;
		}
		arrS[count][j]='\0';
		count--;
	}
}

int main() {
	char inputString[100];
	printf("Nhap chuoi: ");
	scanf("%[^\n]", inputString);

	char arrS[10][64];

	splitString(arrS, inputString);
	for (int i = 0; arrS[i][0] != 0; i++) {
		printf("Tu %d: %s\n", i+1, arrS[i]);
	}
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//Tach chuoi thanh cac tu don le
int main() {
    char inputString[100]; 
    printf("Nhap chuoi: ");
    gets(inputString);

    int length = strlen(inputString);
    printf("Cac ky tu tach ra:\n");
    for (int i = 0; i < length; i++) {
        printf("%c ", inputString[i]);
    }
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Tim ky tu xuat hien nhieu nhat va xuat hien bao nhieu lan
int main() {
	char str[100];
	int freq[256];
	int i, max_freq = 0;
	char max_char;
	printf("Input the string: ");
	scanf("%s", str)
	// count frequency of each character
	for(i = 0; i<strlen(str); i++) {
		freq[str[i]]++;
	}
	// find the character with maximum frequency
	for(i = 0; i < 256; i++) {
		if(freq[i] > max_freq) {
			max_freq = freq[i];
			max_char = i;
		}
	}
	printf("The Highest frequency of character '%c' appears number of times: %d\n", max_char, max_freq);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// dem so lan ky tu nhieu nhat xuat hien trong 1 chuoi - co tinh khoang trang
#define MAX_CHAR 256

void countCharacters(const char *str) {
	int count[MAX_CHAR] = {0};

	for (int i = 0; i < strlen(str); i++) {
		count[(int)str[i]]++;
	}
	printf("Ky tu xuat hien nhieu nhat va so lan xuat hien:\n");
	int maxCount = 0;
	char mostFrequentChar;

	for (int i = 0; i < MAX_CHAR; i++) {
		if (count[i] > maxCount) {
			maxCount = count[i];
			mostFrequentChar = (char)i;
		}
	}
	printf("ky tu '%c' xuat hien %d lan\n", mostFrequentChar, maxCount);
}

int main() {
	char str[100];

	printf("Enter a string: ");
	scanf("%99[^\n]", str);

	countCharacters(str);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// dem so lan ky tu nhieu nhat xuat hien trong 1 chuoi lien không tinh khoang trang
int main() {
    char str[100];
    int freq[256] = {0};
    int i, max_freq = 0;
    char max_char;

    printf("Input the string: ");
    scanf("%s", str); 

    for (i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    printf("The Highest frequency of character '%c' appears number of times: %d\n", max_char, max_freq);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Nhap chuoi va dao nguoc chuoi giam dan
int main() {
	char temp, s[100];
	int i, j;
	scanf("%s", s);
	int len = strlen(s);
	for(i=0; i<len-1; i++) {
		for(j=i+1; j<len; j++) {
			if(s[i]<s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("%s", s);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Nhap chuoi va lay chuoi tu 1 diem den do dai bat dau tu 1
int main() {
	char str[100], substr[100];
	int start, len, i, j;
	printf("Input the string: ");
	fgets(str, 100, stdin);
	printf("Input the position to start extraction: ");
	scanf("%d", &start);
	printf("Input the length of substring: ");
	scanf("%d", &len);
	j = 0;
	for(i=start-1; i<start-1+len; i++) {
		substr[j] = str[i];
		j++;
	}
	substr[j] = '\0';
	printf("Substring extracted is: %s", substr);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
//Nhap chuoi va in ra tu dai nhat va ngan nhat
int main() {
	char str[100], word[100], largest[100], smallest[100];
	int i, j, len, largest_len = 0, smallest_len = 100;
	printf("Input the string: ");
	fgets(str, 100, stdin);
	j = 0;
	for(i=0; i<=strlen(str); i++) {
		if(str[i]==' ' || str[i]=='\0') {
			word[j] = '\0';
			len = strlen(word);
			if(len > largest_len) {
				largest_len = len;
				strcpy(largest, word);
			}
			if(len < smallest_len) {
				smallest_len = len;
				strcpy(smallest, word);
			}
			j = 0;
		} else {
			word[j] = str[i];
			j++;
		}
	}
	printf("The largest word is: %s\n", largest);
	printf("The smallest word is: %s\n", smallest);
	return 0;
}
*/
//-----------------------------------------------------------------
