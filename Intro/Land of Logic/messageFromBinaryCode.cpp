string messageFromBinaryCode(string code)
{
    int p=7,x=0;
    string r="";
    for(char c:code)
    {
        c-='0';
        x+=pow(2,p)*c;
        if(!p)
        {
            p=8;
            r+=(char)x;
            x=0;
        }
        p--;
        
    }
    return r;
}