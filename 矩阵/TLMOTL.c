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
    for(i=1;i<j-1;i++)
    {
        for(m=0,n=1;n<c-1;n++)
        {
            if(arr[i][n]>arr[i-1][n]&&arr[i][n]>arr[i][n-1]&&arr[i][n]>arr[i+1][n]&&arr[i][n]>arr[i][n+1])
            {
                printf("%d %d %d\n",arr[i][n],i+1,n+1);
                m++;
            }
        }
    }
    if(m==0)
    {
        printf("None %d %d",j,c);
    }
}