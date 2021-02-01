/*
5
9
3
1
12
46
  1  3  9 12 46
*/
#include<stdio.h>
struct sort
{int a[30],n,i,j,temp;
}s;
int main()
{
  scanf("%d",&s.n);
  for(s.i=0;s.i<s.n;s.i++)
    scanf("%d",&s.a[s.i]);
 for(s.i=1;s.i<s.n;s.i++)
 {
    s.temp=s.a[s.i];
    s.j=s.i-1;
    for(;s.j>=0;s.j--)
    {
      if(s.a[s.j]>s.temp)
        s.a[s.j+1]=s.a[s.j];
      else
        break;
    }
   s.a[s.j+1]=s.temp;
 }

  for(s.i=0;s.i<s.n;s.i++)
    printf("%3d",s.a[s.i]);
  printf("\n");
}
