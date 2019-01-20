bool checkPalindrome(std::string s)
{
    string p=s;
    reverse(p.begin(),p.end());
    return s==p;
}
