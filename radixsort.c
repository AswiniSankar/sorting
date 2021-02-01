/*
9
4
23
3
12
781
2
30
6
71
781
    2    3    4    6   12   23   30   71  781
*/
#include<stdio.h>
void bucket(int [],int );
void bucketsort(int [],int ,int );
int maxele(int [],int );

int main()
{
 int i,n,a[30];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 bucket(a,n);
 printf("\n");
}
void bucket(int a[],int n)
{
  int pos,max;
  max=maxele(a,n);
  for(pos=1;(max/pos)>0;pos=pos*10)
    bucketsort(a,n,pos);
  for(int i=0;i<n;i++)
   printf("%5d",a[i]);

}
void bucketsort(int a[],int n,int pos)
{
  int count[10]={0},i,j=0,b[30];
  for(i=0;i<n;i++)
   ++count[(a[i]/pos)%10];
  for(i=1;i<10;i++)
    count[i]+=count[i-1];
  for(i=n-1;i>=0;i--)
    b[--count[(a[i]/pos)%10]]= a[i];
  for(i=0;i<n;i++)
   a[j++]=b[i];
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
