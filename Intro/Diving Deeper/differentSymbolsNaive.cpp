int differentSymbolsNaive(string s) 
{
    return set<char>(s.begin(),s.end()).size();
}