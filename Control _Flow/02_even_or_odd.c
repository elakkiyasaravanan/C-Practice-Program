//first way

#include<stdio.h>
int main()
{
  int number;
printf("enter a number to check:");
scanf("%d",&number);
if(number%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
return 0;
}

//second way

#include <stdio.h>
void checkOddEven(int N) {
    int r = N % 2;
    if (r == 0)  {
        printf("Even");
    }
    else  {
        printf("Odd");
    }
}

int main() {
    int N = 101;
    checkOddEven(N);
    return 0;
}
