string lineEncoding(string s) 
{
    string r="";
    char l=s[0];
    int c=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==l)
            c++;
        else
        {
            if(c>1)
                r+=to_string(c);
            r+=l;
            c=1;
        }
        l=s[i];
    }
    if(c>1)
        r+=to_string(c);
    r+=l;
    return r;
}