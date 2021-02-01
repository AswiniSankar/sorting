#include<stdio.h>
int main()
{
  int i,j,n,temp,flag=0,a[50];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    flag=0;
     for(j=0;j<n-1-i;j++)
     {
        if(a[j]>a[j+1])
        {
          temp=a[j];a[j]=a[j+1];a[j+1]=temp;
          flag=1;
        }
     }
     if(flag==0)
       break;
  }
  for(i=0;i<n;i++)
   printf("%3d",a[i]);
  printf("\n");
}
