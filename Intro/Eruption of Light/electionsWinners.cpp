int electionsWinners(vector<int> v, int k) 
{
    int r=0,d=0;
    for(int i=0;i<v.size();i++,d=0)
    {
        for(int j=0;j<v.size()&&!d;j++)
            if(i!=j)
                d=v[i]+k<=v[j];
        r+=!d;
    }
    return r;
}