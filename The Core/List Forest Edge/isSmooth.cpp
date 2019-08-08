int isSmooth(vector<int> a) 
{
    int l = a.size();
    return a[l-1]==a[0]?l%2?a[0]==a[(l-1)/2]:a[0]==(a[l/2]+a[l/2-1]):0;
}
