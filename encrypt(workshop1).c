#include<stdio.h>
#include<string.h>

char encrypt(char n){;
switch(n){
    case 'f': return '0';
    case 'p': return '1';
    case 't': return '2';
    case 'u': return '3';
    case 'c': return '4';
    case 'a': return '5';
    case 'n': return '6';
    case 'T': return '7';
    case 'h': return '8';
    case 'o': return '9';
    default: return ' ';
    }
}
int main()
{
    char n[20];
    scanf("%s",&n);

    for(int i=0; i<strlen(n); i++){
        printf("%c",encrypt(n[i]));
    }

    return 0;
}


