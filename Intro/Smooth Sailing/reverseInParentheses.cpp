string reverseInParentheses(string s) {
    int a,b;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')
            a = i;
        if(s[i] == ')')
        {
            b = i;
            string t = s.substr(a + 1, b - a - 1);
            reverse(t.begin(), t.end());
            return reverseInParentheses(s.substr(0, a) + t + s.substr(b + 1));
        }
    }
    return s;
}