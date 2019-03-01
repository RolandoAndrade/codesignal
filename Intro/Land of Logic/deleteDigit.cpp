string longestWord(string text) 
{
    string l="",a="";
    for(char c:text)
    {
        if('A'<=toupper(c)&&toupper(c)<='Z')
            a+=c;
        else
        {
            if(a.size()>l.size())
                l=a;
            a="";
        }
    }
    return a.size()>l.size()?a:l;
}
