vector<vector<int>> boxBlur(vector<vector<int>> m) 
{
    vector<vector<int>>r;
    for(int i=0;i<m.size()-2;i++)
    {
        vector<int>a;
        for(int j=0;j<m[0].size()-2;j++)
        {
            int n=0;
            for(int k=i;k<m.size()&&k<i+3;k++)
                for(int x=j;x<m[0].size()&&x<j+3;x++)
                    n+=m[k][x];
            a.push_back(n/9);
        }
        r.push_back(a);
     }      
     return r;                        
}
