#include <stdio.h>
#include <stdlib.h>

int find_min(int a, int b, int c){
    if(b<a){
        a=b;
    }
    if(c<a){
        a=c;
    }
    return a;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,min;
    printf("enter nine integer: ");
    scanf("%d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i);

    min = find_min(find_min(a,b,c),find_min(d,e,f),find_min(g,h,i));
    printf("The smallest number is %d", min);
    return 0;
}