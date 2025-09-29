#include<stdio.h>
int main()
{
  int n,key;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter element to search: ");
scanf("%d", &key);
int low=0,high=n-1,middle,found=0;
while(low<=high)
{
middle=(low+high)/2;
if(arr[middle]==key)
{
 printf("Element %d found at index %d\n", key, middle);
            found = 1;
            break;
}
else if(arr[middle]<key)
{
low=middle+1;
}
else
{
high=middle-1;
}
}
 if (!found) {
        printf("Element %d not found\n", key);
    }

    return 0;
}
