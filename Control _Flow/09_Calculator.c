#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  
    printf("Enter second number: ");
    scanf("%lf", &b);
    switch(op) {
        case '+':
            result = a + b;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(b != 0)
                result = a / b;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
