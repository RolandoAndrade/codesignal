int phoneCall(int m1, int m2, int m3, int s) 
{
    if(m1>s)
        return 0;
    int a=s-m1-9*m2;
    if(a>0) return a/m3+10;
    return (s-m1)/m2+1;
}