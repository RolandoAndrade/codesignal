string r, longestDigitsPrefix(string s) 
{
    r="";
    int i=0;
    while('0'<=s[i]&&s[i]<='9') r+=s[i++];
    if(r.size()>0) return r;
}
