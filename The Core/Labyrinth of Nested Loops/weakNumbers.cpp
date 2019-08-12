int div(int x)
{
    int d = 0;
    for(int i = 1;i<=x;i++) d+=!(x%i);
    return d;
}

auto weak(auto v, int x, int *m)
{
    int c=0;
    for(auto p:v)
        c+=p.first>x;
    *m=max(*m,c);
    return make_pair(x,c);
}

int maximal(auto v, int m)
{
    int r =0;
    for(auto p:v) r+=p.second==m;
    return r;
}

auto weakNumbers(int n) 
{
    vector<pair<int,int>> d;
    int m = 0;
    for(int i = 1; i<=n;i++) d.push_back(weak(d, div(i),&m));
    return vector{m,maximal(d,m)};
}