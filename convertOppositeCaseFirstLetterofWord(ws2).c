#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sen[101];
    printf("Enter sentence: ");
    fgets(sen, sizeof(sen),stdin);

    int len = strlen(sen);
    if (sen[len-1]=='\n'){
        sen[len-1]='\0';
    }
    int new_word = 1;
    for(int i=0; sen[i]!= '\0';i++){
        if(new_word && isalpha(sen[i])){
            if(isupper(sen[i]))
                sen[i]=tolower(sen[i]);
            else if(islower(sen[i]))
                sen[i]=toupper(sen[i]);
                new_word=0;
        } else if (sen[i]==' '){
            new_word=1;
        }
    }
    printf("%s",sen);

    return 0;
}

