#include<stdio.h>
int main()
{
  int a[11][11],i,j,n,p;
  scanf("%d",&n);
  a[0][0]=0;
  for(i=0;i<n;i++)
  {
    for(p=0;p<n-i-1;p++)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
      if(i==j)
      {
        a[i][j]=1;
      }
      else if(j==0)
      {
        a[i][j]=1;
      }
      else
      {
      a[i][j]=a[i-1][j-1]+a[i-1][j];
      }
      printf("%4d",a[i][j]);
      if(i==j)
      printf("\n");
    }
  }
  return 0;
}
