int arrayChange(vector<int> ia) 
{
    int r=0;
    for(int i=0;i<ia.size()-1;i++)
        if(ia[i]>=ia[i+1])
        {
            int a=ia[i]-ia[i+1]+1;
            r+=a;
            ia[i+1]+=a;
        }
    return r;
}