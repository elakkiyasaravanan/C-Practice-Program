// Adding Two Numbers using + Operator
#include<stdio.h>
int main()
{
  int n1,n2;
printf("Enter Two Numbers: ");
scanf("%d %d",&n1,&n2);
int sum= n1+n2;
printf("The Sum of Two Numbers is : %d",sum);
return 0;
}

//Addition Using Increment Operator (++)
#include<stdio.h>
int main()
{
   int n1,n2;
printf("Enter Two Numbers: ");
scanf("%d %d",&n1,&n2);
while(n2!=0)
{
n1++;
n2--;
}
printf("The Sum of Two Numbers is : %d",n1);
return 0;
}

//Addition Using Bitwise Operators
#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter Two Numbers: ");
scanf("%d %d",&n1,&n2);
int carry;
while(n2!=0)
{
  carry=a&b;
  a=a^b;
  b=carry<<1;
}
printf("The Sum of Two Numbers is : %d",n1);
return 0;
}
