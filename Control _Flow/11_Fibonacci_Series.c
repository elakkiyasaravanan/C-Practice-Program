#include<stdio.h>
int main()
{
  int n,next;
  printf("Enter the number of terms:");
  scanf("%d",&n);
  int first,second;
  first=0,second=1;
  for(int i=0;i<=n;i++)
{
    if (i <= 1)
     next = i;
    else
      next=first+second;
      first=second;
      second=first;
 }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
