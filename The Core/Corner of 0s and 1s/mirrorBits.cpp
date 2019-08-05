int mirrorBits(int a) 
{
    int r = 0;
    while(a)
    {
        r<<=1;
        r|=a&1;
        a>>=1;
    }
    return r;
}