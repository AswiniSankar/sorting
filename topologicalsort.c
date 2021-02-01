/*
4
0
1
1
0
0
0
0
1
0
0
0
1
0
0
0
0
-----
1
2
3
4

*/

#include<stdio.h>
int main()
{
 int i,j,a[30][30],n,c=0,indegree[20],k,flag[20];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
{
  indegree[i]=0;flag[i]=0;
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  indegree[i]+=a[j][i];
while(c<n)
{
  for(k=0;k<n;k++)
  {
    if((indegree[k]==0) && (flag[k]==0))
    {
      printf("%d\n",k+1);
      flag[k]=1;
    }
  for(i=0;i<n;i++)
  {
    if(a[i][k]==1)
     indegree[k]--;
  }
  }
 c++;
}


}
