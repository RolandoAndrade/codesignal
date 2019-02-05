vector<int> extractEachKth(vector<int> v, int k) 
{
    vector<int>r;
    for(int i=0;i<v.size();i++)
        if((i+1)%k)
            r.push_back(v[i]);
    return r;
}