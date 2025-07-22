void swap1(int a,int b){
     int tmp=a;
      a=b;
      b=tmp;
     printf("a = %d | b = %d",a,b);
}
void swap2(int a,int b){
    a+=b;
    b=a-b;
    a=a-b;
    printf("\na = %d | b = %d",a,b);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap1(a,b);
    swap2(a,b);