int digitDegree(int n) 
{
    if(n<10) return 0;
    int r=0;
    for(;n>0;n/=10) r+=n%10;
    return digitDegree(r)+1;
}