string tU(string s)
{
    for(char &c: s)
        c = toupper(c);
    return s;
}
int isUnstablePair(string a, string b) {
    return (a<b&&tU(a)>tU(b))||(b<a&&tU(b)>tU(a));
}