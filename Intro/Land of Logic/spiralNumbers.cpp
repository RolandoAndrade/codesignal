vector<vector<int>> spiralNumbers(int n) 
{
    vector<vector<int>> v(n,vector(n,0));
    int c=1, r=0;
    while(r<(n+1)/2)
    {
        for(int i=r;i<n-r-1;i++) v[r][i]=c++;
        for(int i=r;i<n-r-1;i++) v[i][n-r-1]=c++;
        for(int i=n-r-1;i>r;i--) v[n-r-1][i]=c++;
        for(int i=n-r-1;i>r;i--) v[i][r]=c++;
        r++;     
    }
    if(n%2)v[n/2][n/2] = c;
    return v;
}