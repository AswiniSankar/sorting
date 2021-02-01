/*
9
2
4
8
1
4
6
8
7
4
  1  2  4  4  4  6  7  8  8
*/
#include<stdio.h>
void mergesort(int [] ,int ,int );
void merge(int [],int ,int ,int );
int main()
{
  int n,a[30],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  mergesort(a,0,n-1);
 for(i=0;i<n;i++)
   printf("%3d",a[i]);
  printf("\n");
}
void mergesort(int a[],int l,int u)
{
 int mid;
  if(l<u)
 {
  mid=(l+u)/2;
  mergesort(a,l,mid);
  mergesort(a,mid+1,u);
  merge(a,l,mid,u);
 }

}
void merge(int a[], int p, int q, int r)
{
    int b[30];   
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];   
        }
        else
        {
            b[k++] = a[j++];
        }
    }
  
    while(i <= q)
    {
        b[k++] = a[i++];
    }
  
    while(j <= r)
    {
        b[k++] = a[j++];
    }
  
    for(i=r; i >= p; i--)
    {
        a[i] = b[--k]; 
    }
}
