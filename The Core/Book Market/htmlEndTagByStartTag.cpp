string htmlEndTagByStartTag(string s) 
{
    return "</"+s.substr(1,(s.find(" ")>s.find(">"))?s.find(">")-1:s.find(" ")-1)+">";
}