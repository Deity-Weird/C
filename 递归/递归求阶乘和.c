double fact( int n )  {  
    double f;  
    
    if(n==1||n==0)  
    	f=1;  
    else  
    	f=fact(n-1)*n;  
    	
    return f;  
}  
  
double factsum( int n )  
{  
    double fs;  
    
	if(n==1)  
    	fs=1;  
    else if(n==0)  
    	fs=0;  
    else  
    	fs=factsum(n-1)+fact(n);  
    return fs;  
}
