#include "stdio.h"
void main()
{
    int c,j,i,n,m;
    int a[100];
    int arr[100][20]={0,};
    scanf("%d",&c);
    m=0;
    j=c;
    for(i=0;i<j;i++)
    {
        for(n=0;n<c;n++)
        {
            scanf("%d",&arr[i][n]);
        }
    }
    for(i=0;i<j-1;i++)
    {
        for(n=0;n<c-1;n++)
        {
            if(n+i==j-1&&n!=i)
            {
                
            }
            else
            {
                m+=arr[i][n];
            }
        }
    }
   printf("%d",m);
}