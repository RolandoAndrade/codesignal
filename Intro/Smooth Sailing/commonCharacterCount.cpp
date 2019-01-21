int commonCharacterCount(string s1, string s2) 
{
    int r = 0;
    for (char c : s1) 
    {
        if (s2.find(c)!= -1) 
        {
            s2.erase(s2.find(c),1);
            r++;
        }
    }
    return r;
}