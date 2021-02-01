/*
3
5
8
9
7
4
2
1
  1  2  3  4  5  7  8  9
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 8
void bitonicmerge(int ,int ,int);
void sort();
void bitonic(int ,int ,int );
void compare(int ,int ,int );
int a[MAX];
int up=1;
int down=0;
int main()
{
  int i;
  for(i=0;i<MAX;i++)
   scanf("%d",&a[i]);
 sort();
  for(i=0;i<MAX;i++)
    printf("%3d",a[i]);

}
void sort()
{
  bitonic(0,MAX,up);
}
void bitonic(int low,int c,int dir)
{
  int k;
  if(c>1)
  {
   k=c/2;
   bitonic(low,k,up);
   bitonic(low+k,k,down);
   bitonicmerge(low,c,dir);
  }
}
void bitonicmerge(int low,int c,int dir)
{
  int k,i;
 if(c>1)
 {
    k=c/2;
   for(i=low;i<low+k;i++)
     compare(i,i+k,dir);
   bitonicmerge(low,k,dir);
   bitonicmerge(low+k,k,dir);
 }
}
void compare(int i,int j,int dir)
{
  int t;
  if(dir==(a[i]>a[j]))
  {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
}


