int absoluteValuesSumMinimization(vector<int> a) 
{
    int r=a[0], min=-1;
    for(int i: a)
    {
        int s=0;
        for(int j: a)
            s+=abs(j-i);
        if(min<0||s<min)
        {
            min=s;
            r=i;
        }
    }
    return r;
}