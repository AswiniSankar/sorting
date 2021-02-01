/*
7
23
12
6
4
1
67
20
   1   4   6  12  20  23  67
*/
#include<stdio.h>
void cyclesort(int [],int);
int mincount(int [],int ,int );
int main()
{
  int n,i,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  cyclesort(a,n);
}
void cyclesort(int a[],int n)
{
   int i,j,k,pos,item,temp;
   for(i=0;i<n;i++)
   {
     item=a[i];
     pos=i;
   do
   {
      k=0;
     for(j=0;j<n;j++)
     {
      if(pos!=j && a[j]<item)
         k++;
      }
      if(pos!=k)
      {
      while(pos!=k && item==a[k])
         k++;
       temp=a[k];
       a[k]=item;
       item=temp;
       pos=k;
      }
   }while(pos!=i);

  }
   for(i=0;i<n;i++)
   { 
   printf("%4d",a[i]);
   }
}

