int isCaseInsensitivePalindrome(auto s) {
    for(auto &c:s) c=toupper(c);
    string q = s;
    reverse(begin(q),end(q));
    return q == s;
}