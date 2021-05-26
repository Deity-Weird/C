#include "stdio.h"
#include "string.h"
int main()
{
    char str[100];
    int len;
    char *p=str,*q,temp;
    gets(str);
    len=strlen(str);
    q=str+len-1;
    while(p<q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        q--;
        p++;
    }
    printf("%s\n",str);
}