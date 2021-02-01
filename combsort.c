/*
7
23
12
6
1
4
67
20
   1   4   6  12  20  23  67
*/
#include<stdio.h>
void combsort(int [],int );
int main()
{
  int n,i,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  combsort(a,n);
  printf("\n");
}
void combsort(int a[],int n)
{
  int k=0,i,j,gap=n/1.3;
  for(gap;gap>0;gap/=1.3)
  {for(i=0;i<n;i++)
  {
    if(a[i]>a[gap+i] && (gap+i)<n)
      {
         j=a[gap+i];
         a[gap+i]=a[i];
         a[i]=j;
      }
  }}
 for(i=0;i<n;i++)
   printf("%4d",a[i]);
}
