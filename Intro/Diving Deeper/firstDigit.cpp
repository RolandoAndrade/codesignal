char firstDigit(string s) 
{
    for(char c:s)
        if('0'<=c&&c<='9')
            return c;
    return ' ';
}
