/*
12
5
1
8
2
1
4
5
2
1
6
7
2

  1  1  1  2  2  2  4  5  5  6  7  8
*/
#include<stdio.h>
void countsort(int [],int );
int maxele(int [],int );
int main()
{
  int i,n,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  countsort(a,n);
}
void countsort(int a[],int n)
{
  
  int count[30]={0},i,max,b[30];
  max=maxele(a,n);
  for(i=0;i<n;i++)
   ++count[a[i]];
  for(i=1;i<=max;i++)
   count[i]=count[i]+count[i-1];
  for(i=n-1;i>=0;i--)
   b[--count[a[i]]]=a[i];
  for(i=0;i<n;i++)
   printf("%3d",b[i]);
}
int maxele(int a[],int n)
{
  int max=a[0];
  int i;
  for(i=1;i<n;i++)
   { if(max<a[i])
       max=a[i];
   }
 return max;
}
