vector<int> arrayReplace(vector<int> v, int a, int b) 
{
    replace(v.begin(), v.end(), a, b);
    return v;
}