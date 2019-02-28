int p(int u, int d, int h, int a)
{
    a+=u;
    if(a>=h)
        return 1;
    return p(u,d,h,a-d)+1;
}

int growingPlant(int u, int d, int h) 
{
    return p(u,d,h,0);
}
