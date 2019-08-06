int lineUp(string s) 
{
    int r = 0, q = 0;
    for(char c: s)
    {
        q += c=='L' ? 1 : c=='R' ? -1 : 0;
        if(!(abs(q)%2))
        {
            q = 0;
            r++;
        }
    }
    return r;
}
