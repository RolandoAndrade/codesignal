int deleteDigit(int n) 
{
    string s=to_string(n);
    int m=-1;
    for(int i=0;i<s.size();i++)
    {
        string a=s;
        a.erase(a.begin()+i);
        m=max(m,stoi(a));
    }
    return m;
}