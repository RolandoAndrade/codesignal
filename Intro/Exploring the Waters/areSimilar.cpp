bool areSimilar(vector<int> a, vector<int> b) 
{
    iter_swap(mismatch(a.begin(), a.end(), b.begin(), b.end()).first,
              mismatch(a.rbegin(), a.rend(), b.rbegin(), b.rend()).first);
    return a == b;
}
