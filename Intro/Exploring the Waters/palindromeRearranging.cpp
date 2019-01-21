bool palindromeRearranging(string s) 
{
    map<char,int> m;
    for(char c : s)
        m[c]++;
    int r=0;
    for(pair<char,int> a : m)
        if(a.second%2)
            r++;
    return r <= 1;
}