vector<int> alternatingSums(vector<int> a) 
{
    int p=0,q=0;
    for(int i=0;i<a.size();i++)
        if(i%2==0)
            p+=a[i];
        else
            q+=a[i];
    vector<int> w;
    w.push_back(p);
    w.push_back(q);
    return w;
}