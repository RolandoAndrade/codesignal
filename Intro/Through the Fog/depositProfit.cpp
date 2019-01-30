int depositProfit(double d, double r, double t) 
{
    return d<t?1+depositProfit(d*(100+r)/100,r,t):0;
}
