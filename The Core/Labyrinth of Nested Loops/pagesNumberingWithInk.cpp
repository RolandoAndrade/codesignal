int nD(int i)
{
    return 1+log10(i);
}
int pagesNumberingWithInk(int c, int n) {
    
    return n>=0?pagesNumberingWithInk(c+1,n-nD(c)):c-2;
}