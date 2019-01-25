string alphabeticShift(string s) 
{
    for(int i=0;i<s.size();i++)
        s[i]=s[i]=='z'?'a':s[i]+1;
    return s;
}