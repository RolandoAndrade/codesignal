vector<int> replaceMiddle(vector<int> a) 
{
    int l = a.size();
    if(l%2) return a;
    a[l/2-1]+=a[l/2];
    a.erase(begin(a)+l/2);
    return a;
}
