#include<stdio.h>
void merge(int arr[],int left,int middle,int right)
{
int n1=middle-left+1;
int n2=right-middle;
int L[n1], R[n2];
    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
 int i = 0, j = 0, k = left;
    // Merge temp arrays back into arr
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int left,int right)
{
if(left<right)
{
int middle=(left+right)/2;
}
mergesort(arr,left,middle);
mergesort(arr,middle+1,right);

merge(arr,left,middle,right);
}
int main()
{
  int n;
printf("Enter the size of array");
scanf("%d",&n);
int arr[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
 mergeSort(arr, 0, n - 1);

    printf("Sorted array (Merge Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
