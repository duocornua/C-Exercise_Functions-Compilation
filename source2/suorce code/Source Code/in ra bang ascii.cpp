#include<stdio.h>
int main()
{int m;
 for(m=0; m<256; m++)
    {    printf("%c : %d, %o, %X\n", m, m, m, m);
            if (m !=0 && m %20==0)
			 getchar(); }
			 return 0;
}

