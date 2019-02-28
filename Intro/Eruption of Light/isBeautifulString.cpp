int isBeautifulString(string s) 
{
    int t,p=count(s.begin(),s.end(),'a');
    for(int i='b';i<='z';i++)
    {
        t=count(s.begin(),s.end(),i);
        if(t>p) return 0;
        p=t;
    }
    return 1;
}               
