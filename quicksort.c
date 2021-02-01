/*
5
7
3
5
2
1
  1  2  3  5  7
*/
#include<stdio.h>
void partition(int [],int,int);

 int a[50],n;
int start,end;
int main()
{
  int i;
 
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  start=0;end=n-1;
  partition(a,start,end);
  for(int i=0;i<n;i++)
  printf("%3d",a[i]);
  printf("\n");
}

void partition(int a[],int start,int end)
{
 int pivot,temp,i,j;
if(start<end)
{
 pivot=start;
 i=start;
 j=end;
while(i<j)
{
 while(a[i]<=a[pivot] && i<end)
   i++;
 while(a[j]>a[pivot])
  j--;
 if(i<j)
 {
 temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }
}
 
  temp=a[pivot];
  a[pivot]=a[j];
  a[j]=temp;
  partition(a,start,j-1);
  partition(a,j+1,end);
 }
}
