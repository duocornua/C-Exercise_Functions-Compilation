#include <stdio.h>
int main(){
	double num1, num2, result;
	char op;   
	printf("Enter an expression (+ - * /): ");
	scanf("%lf%c%lf", &num1, &op, &num2);
	printf("Result: ");
	switch (op){
		case '+' : 
			result = num1 + num2;
        	printf("%lf", result);
           	break;
		case '-' : 
			result = num1 - num2;
            printf("%lf", result);
            break;
        case '*' : 
			result = num1 * num2;
        	printf("%lf", result);
        	break;
        case '/' : 
			if (num2==0){
            	printf("Divide by 0");
            }else{
            	result = num1 / num2;
            	printf("%lf", result);
            }
            break;
        default: 
			printf("Op is not supported");
			break;
	}
	return 0;
}

