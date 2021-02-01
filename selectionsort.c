#include<stdio.h>
int main()
{
  int i,j,n,a[50],temp,min;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {min=i;
  for(j=i+1;j<n-1;j++)
  {
    if(a[min]>a[j])
      min=j;
  }
  if(min!=i)
  {
    temp= a[i];
    a[i]=a[min];
    a[min]=temp;
  }
 }
 for(i=0;i<n;i++)
  printf("%3d",a[i]);
 printf("\n");
}
