#include <stdio.h>
#include <math.h>

int main () {
    char operator;
    double num1, num2, result;
    //int cont_Calculate = 1;
    
    printf("Calculator\n");
    
    while (1) {
        printf("\nEnter an operator(+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);
    
    
        if (operator == 'q') {
            //cont_Calculate = 0;
            printf("Exiting...\n");
            break;
        }
        
        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Error: Invalid operator. Use these(+,-,*,/)\n");
            continue;
        }
    
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
    
        switch (operator) {
            case '+':
            result = num1 + num2;
            printf("Result: %.3lf\n", result);
            break;
        
            case '-':
            result = num1 - num2;
            printf("Result: %.3lf\n", result);
            break;
        
            case '*':
            result = num1 * num2;
            printf("Result: %.3lf\n", result);
            break;
        
            case '/':
                if (num2 != 0) {
                    printf("Result: %.3lf\n", result);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
                
            
            case '%':
            result = (int)num1 % (int)num2;
            printf("Result: %.3lf\n", result);
            break;
            
            case '^':
            result = pow(num1, num2);
            printf("Result: %.3lf\n", result);
            break;
          
        }
    }
    return 0;
}