int differentSquares(vector<vector<int>> m) 
{
    set<vector<vector<int>>> s;
    for(int i=0;i<m.size()-1;i++)
    {
        for(int j=0;j<m[0].size()-1;j++)
        {
            vector<vector<int>> a;
            a.push_back({m[i][j],m[i][j+1]});
            a.push_back({m[i+1][j],m[i+1][j+1]});
            s.insert(a);
        }
    }
    return s.size();
}