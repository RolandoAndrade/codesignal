string findEmailDomain(string a) 
{
    return a.substr(a.find_last_of("@")+1,a.size());
}
