#include "stdio.h"
#include "string.h"
int main()
{
    char str[100];
	char j[100];
    int len,n,m,flag;
    char *p=str;
    gets(j);
    gets(str);
    n=0;m=0;
    flag=0;
    len=strlen(str);
    while(n<len)
    {
        if(*p==j[0])
        {
            m=n;
            flag++;
        }
        p++;
        n++;   
    }
    if(m||flag)
    {
        printf("index = %d",m);
    }
    else
    {
        printf("Not Found");
    }
}