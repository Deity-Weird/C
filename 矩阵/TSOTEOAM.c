#include "stdio.h"
void main()
{
    int c,j,i,n,m;
    int a[100];
    int arr[100][20]={0,};
    scanf("%d %d",&j,&c);
    for(i=0;i<j;i++)
    {
        for(n=0;n<c;n++)
        {
            scanf("%d",&arr[i][n]);
        }
    }
    for(i=0;i<j;i++)
    {
        for(m=0,n=0;n<c;n++)
        {
            a[i]+=arr[i][n];
        }
    }
     for(n=0;n<j;n++)
     {
          printf("%d\n",a[n]);
     }
}