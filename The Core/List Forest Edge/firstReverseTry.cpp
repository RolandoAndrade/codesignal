vector<int> firstReverseTry(vector<int> v) 
{
    if(v.size()>1) v[0]^=v[v.size()-1]^=v[0]^=v[v.size()-1];
    return v;
}
