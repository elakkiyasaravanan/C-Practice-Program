#include<stdio.h>
int main()
{
  int row,col;
  printf("enter row: ");
  Scanf("%d",&row);
  printf("enter column: ");
  Scanf("%d",&col);
  int arr[row][col];
printf("Enter the elements:);
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
printf("%d",arr[i][j]);
}
  printf("\n");
}
}
    
