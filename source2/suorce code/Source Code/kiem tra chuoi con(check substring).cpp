#include <stdio.h>
#include <string.h>

int main(void)
{
    char mainstring[]="The quick brown fox jumps over the lazy dog";
    char substring[20], *ret;
    int i=0;
    puts("Enter the sub string to find: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strlen(substring)-1]='\0';
    ret=strstr(mainstring,substring);
    if(strcmp((ret=strstr(mainstring,substring)),substring))
    {
        printf("Substring is present ");
    }
    printf("and the sub string is:");

    for(i=0;i<strlen(substring);i++)
    {
            printf("%c",*(ret+i));

    }
    puts("\n");
    return 0;
}
