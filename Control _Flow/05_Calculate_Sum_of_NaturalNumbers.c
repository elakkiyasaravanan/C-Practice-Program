#include<stdio.h>
{
int number;
printf("Enter a number:);
scanf("%d",&number);
int sum=0;
for(int i=0;i<=number;i++)
{
sum+=i;
}
printf("Sum = %d", sum);
    return 0;
}
