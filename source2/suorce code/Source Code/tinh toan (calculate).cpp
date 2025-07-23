#include <stdio.h>
int main()
{
double num1 , num2 , result ;
char op ;
  printf("Nhap phep tinh : ");
  scanf("%lf%c%lf",&num1,&op,&num2);
switch(op){
    case '+' : 
	result=num1+num2;
	printf("Ket qua =%.1lf",result);
	break;
	case '-': result=num1-num2;
	printf("Ket qua =%.1lf",result);
	break;
	case '*': result=num1*num2;
	printf("Ket qua =%.1lf",result);
	break;
	case '/':
	result=num1/num2 ;
	printf("Ket qua = %.1lf",result);
	break ;
	default : printf("op khong ho tro");
}
	getchar();
	return 0;
}
