int f( int n )
{
    int i= 0;
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n>0)
    {
        i=f(n-1)+f(n-2);
        return(i);
    }
    
}