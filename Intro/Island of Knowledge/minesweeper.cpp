int count(vector<vector<bool>> v, int i, int j)
{
    int t=0;
    for(int p=i?i-1:i;p<v.size()&&p<i+2;p++)
        for(int q=j?j-1:j;q<v[0].size()&&q<j+2;q++)
            t+=v[p][q]&&(p!=i||q!=j);
    return t;  
}

vector<vector<int>> minesweeper(vector<vector<bool>> m) 
{
    vector<vector<int>> r;
    for(int i=0;i<m.size();i++)
    {
        vector<int>row;
        for(int j=0;j<m[0].size();j++)
            row.push_back(count(m,i,j));
        r.push_back(row);
    }
    return r;    
}
