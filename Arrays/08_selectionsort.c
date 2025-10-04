#include<stdio.h>
void selectionSort(int arr[],int n);
{
int minIndex;
for(int i=0;i<n-1;i++)
{
minIndex=i;
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[minIndex])
{
minIndex=j;
}
}
if(minIndex!=i)
{
 int temp = arr[i];
 arr[i] = arr[minIndex];
 arr[minIndex] = temp;
}
}
}
int main()
{
int n;
printf("enter the size:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Original array: ");
for (int i = 0; i < n; i++) 
{
printf("%d ", arr[i]);
}
printf("\n");
selectionSort(arr, n);
printf("Sorted array: ");
for (int i = 0; i < n; i++) 
{
        printf("%d ", arr[i]);
}
        printf("\n");

    return 0;
}
