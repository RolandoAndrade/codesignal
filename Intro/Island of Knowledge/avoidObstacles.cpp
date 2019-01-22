int search(vector<int>v, int x)
{
    for(int i:v)
        if(x==i)
            return 1;
    return 0;
}


int avoidObstacles(vector<int> v) 
{
    sort(v.begin(), v.end());
    int r=0, min=0,c=1;
    while(1)
    {
        r+=c;
        if(search(v,r)) r=0,c++;
        if(r>v[v.size()-1])
            return c;
    }
}
