int sum( int n )
{
    int i;
    int m;
    i=0;
    m=0;
    if(n<1)
        return 0;
    if(n==1)
    {
        i+=1;
        return i ;
    }
    else
    {
        i=n+sum(n-1);
        return(i);
    }
}