#include<stdio.h>
int main()
{
  int a[20],i,j,n,temp;
  printf("Enter the n number of elements:");
  scanf("%d",&n);
  printf("enter the %d number:",n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
            
        }
    }
  printf("The sorted array is _______\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n");
}