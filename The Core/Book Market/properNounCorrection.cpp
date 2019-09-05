string properNounCorrection(string s) {
    for(char &c: s) c=tolower(c);
    s[0]=toupper(s[0]);
    return s;
}
