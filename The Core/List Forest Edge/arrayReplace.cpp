vector<int> arrayReplace(vector<int> i, int a, int b) 
{
    replace(begin(i),end(i),a,b);
    return i;
}
