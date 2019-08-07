int candles(int c, int m) 
{
    int l = 0, r = 0;
    while(c)
    {
        r+=c;
        l+=c;
        c=l/m;
        l%=m;
    }
    return r;
}