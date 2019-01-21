bool isLucky(int n) 
{
    int dig=log10(n)+1,sum1=0,sum2=0;
    for(int i=0;n>0;i++,n/=10)
        if(i<dig/2)
            sum1+=n%10;
        else
            sum2+=n%10;
    return sum1==sum2;
}