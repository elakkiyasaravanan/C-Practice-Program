#include<stdio.h>
int main()
{
  int n,sum=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
  sum+=arr[i];
}
float avg=(float)sum/n;
printf("Average of array elements is: %.2f",avg);
}
