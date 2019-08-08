vector<int> removeArrayPart(vector<int> a, int l, int r) 
{
    erase(begin(a)+l,begin(a)+r+1);
    return a;
}