#include<stdio.h>
int main()
{
  long fact=1;
  int number;
printf("Enter a number:");
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
fact*=i;
}
printf("The factorial of the number is: %d",fact);
return 0;
}

//function
#include <stdio.h>
unsigned int factorial(unsigned int N) {
    int fact = 1, i;
    for (i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int N = 5;
    int fact = factorial(N);
    printf("Factorial of %d is %d", N, fact);
    return 0;
}
