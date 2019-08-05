int arrayPacking(auto a) 
{
    int r = 0, t = 0;
    for(int p:a) r|=p<<(8*t++);
    return r;
}
