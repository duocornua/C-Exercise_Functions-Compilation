#include<stdio.h>
int main()
{
    int n,w,h,d,vol,sv=9999999999,sw,sh,sd;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&w,&h,&d);
        vol=w*h*d;
        if(vol<sv){
            sv=vol;
            sw=w;
            sh=h;
            sd=d;
        }
    }
    printf("%d %d %d %d",sv,sw,sh,sd);

    return 0;
}


