vector<int> sortByHeight(vector<int> v) 
{
    for(int i=0;i<v.size()-1;i++)
        if(v[i]!=-1)
            for(int j=i+1;j<v.size();j++)
                if(v[j]!=-1&&v[j]<v[i])
                    v[i]^=v[j]^=v[i]^=v[j];
    return v;
}