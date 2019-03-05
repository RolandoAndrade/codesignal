vector<string> fileNaming(vector<string> n) 
{
    set<string> p;
    for(string &s:n)
    {
        int t = 1;
        string ax = s;
        while(p.find(ax)!=p.end()) ax = s +"("+to_string(t++)+")";
        s=ax;
        p.insert(ax);
    }
    return n;
}