int matrixElementsSum(vector<vector<int>> m) 
{
    int r=0,b;
    for(int i=0;i<m[0].size();i++,b=1)
        for(int j=0;j<m.size()&&b;j++)
            r+=m[j][i]?:b=0;
    return r;
}