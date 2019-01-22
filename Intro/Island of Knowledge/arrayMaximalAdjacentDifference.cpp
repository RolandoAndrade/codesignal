int arrayMaximalAdjacentDifference(auto v) 
{
    int r;
    for(int i=0;i<v.size()-1;i++)
        r=max(r,abs(v[i]-v[i+1]));
    return r;        
}