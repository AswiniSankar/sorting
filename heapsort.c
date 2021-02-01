/*
7
23
12
6
4
1
67
20
 23 12  6  4  1 67 20

 67 12 23  4  1  6 20

  1  4  6 12 20 23 67

*/
#include<stdio.h>
void topologicalsort(int [],int );
void display(int [],int );
int main()
{
  int i,n,a[30];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  printf("%3d",a[i]);
printf("\n");
 topologicalsort(a,n);
}
void topologicalsort(int a[],int n)
{
  int i,j,temp,root,c;
  for(i=1;i<n;i++)
  {
    c=i;
    
  do
   {
  root=(c-1)/2;
    if(a[root]<a[c])
    {
      temp=a[root];
      a[root]=a[c];
      a[c]=temp;
    }
     c=root;

   }while(c!=0);
  }
 display(a,n);
 for(i=n-1;i>=0;i--)
 {
  temp=a[0];
  a[0]=a[i];
  a[i]=temp;
  root=0;
  do{
  c=2*root+1;
   if(a[c]<a[c+1]&& c<i-1)
    c++;
     if(a[root]<a[c] && c<i)
     {
       temp=a[root];
       a[root]=a[c];
       a[c]=temp;
     }
   root=c; 
  }while(c<i);
 }
  display(a,n);
}
void display(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
  printf("%3d",a[i]);
printf("\n");
}



