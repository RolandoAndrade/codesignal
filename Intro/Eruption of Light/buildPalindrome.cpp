string buildPalindrome(string st) 
{
    for(int i=0;st!=string(st.rbegin(), st.rend());i++) st.insert(st.end()-i, st[i]);
    return st;
}