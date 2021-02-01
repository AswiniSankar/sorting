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
void bucketsort(int [],int );
int maxele(int [],int );
struct sort
{
  int arr[10];
}s[10];
int main()
{
  int i,n,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  bucketsort(a,n);
}
void bucketsort(int a[],int n)
{
  int i,j=0,max,pos=1,k=0,t;
  
  max=maxele(a,n);
  for(pos=1;max/pos>0;pos=pos*10)
  { for(i=0;i<10;i++)
     for(j=0;j<10;j++)
        s[i].arr[j]=0;
    k=0;j=0;
     for(i=0;i<n;i++)
     {
   
      t=(a[i]/pos)%10;
        if(s[t].arr[j]==0)
         {s[t].arr[j]=a[i];
         }
       else
        {
          i--;
          j++;
     continue;
        }
       j=0;
    }
    for(i=0;i<10;i++)
    { for(j=0;j<10;j++)
     { if(s[i].arr[j]==0)
       break;
      else
       {
         if(s[i].arr[j]==0)
             break;
         else
         a[k++]=s[i].arr[j];
       }
      }
    }
  }
 for(i=0;i<n;i++)
  printf("%4d",a[i]);
}
int maxele(int a[],int n)
{
  int max=a[0],i;
  for(i=1;i<n;i++)
   if(max<a[i])
    max=a[i];
  return max;
}
