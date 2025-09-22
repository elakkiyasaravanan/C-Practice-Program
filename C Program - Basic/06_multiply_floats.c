#include<stdio.h>
float multiply(float a, float b)
{
return a*b;
}
int main()
{
  float a,b,product;
printf("Enter the numbers:");
scanf("%f %f",&a,&b);
product=multiply(a,b);
 printf("Product of entered numbers is: %.3f\n", product);

    return 0;
}
