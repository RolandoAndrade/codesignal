int arrayMaxConsecutiveSum(vector<int> v, int k) 
{
    int r=0,c;
    for(int i=0;i<v.size()-k+1;i++)
    {
        c=0;
        for(int j=i;j<i+k;j++)
            c+=v[j];
        if(c>r)
            r=c;
    }
    return r;
}