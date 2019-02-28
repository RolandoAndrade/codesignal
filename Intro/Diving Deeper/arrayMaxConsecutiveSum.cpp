int arrayMaxConsecutiveSum(vector<int> v, int k) 
{
    int r = 0;
    for(int i = 0; i < k; i++) r += v[i];
    int ax = r;
    for(int i = k; i < v.size(); i++) {
        ax -= v[i-k]-v[i];
        r = max(r, ax);
    }
    return r;
}