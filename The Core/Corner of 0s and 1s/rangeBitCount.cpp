int rangeBitCount(int a, int b) 
{
    int c=0;
    for(int i=a;i<=b;i++,a=i)
    {
        while(a>0)
        {
            c+=a&1;
            a/=2;
        }
    }
    return c;
}