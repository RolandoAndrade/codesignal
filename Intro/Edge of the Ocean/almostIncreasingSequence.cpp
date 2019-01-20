bool almostIncreasingSequence(vector<int> s) {
    int i = 0, j = 0, a = s[0], b = s[s.size() - 1] ;
    for (int k = 1; k < s.size(); k++)
    {
        a = a<s[k] ? s[k] : (i++, a);
        b = b>s[s.size()-k-1] ? s[s.size()-k-1] : (j++, b);
    }
    return i <= 1 || j <= 1;
}