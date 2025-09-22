//Brute Force Method 
#include<stdio.h>
int main()
{
  int n;
int count=0;
printf("Enter a number to check ");
scanf("%d",&n);
if(n<=1)
{
printf("%d is not a prime",n);
}
else
{
for(int i=1;i<=n;i++)
{
if(n%i==0)
  count++;
}
if(count>2)
{
printf("%d is not a prime",n);
}
else
{
printf("%d is prime",n);
}
}
return 0;
}

//Optimized Approach 
#include <math.h>
#include <stdio.h>
​
int main() {
    int n = 29;
    int cnt = 0;

    if (n <= 1)
        printf("%d is NOT prime", n);
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }
        if (cnt > 0)
            printf("%d is NOT prime", n);
​
        // else n is prime
        else
            printf("%d is prime", n);
    }
    return 0;
}

