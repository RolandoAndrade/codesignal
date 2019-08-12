int squareDigitsSequence(int a) 
{
    set<int> r;
    int l = 0, q;
    while(1)
    {
        r.insert(a);
        if(r.size()==l) return r.size()+1;
        l=r.size();
        for(q = 0;a;q+=pow(a%10,2),a/=10);
        a=q;
    }
    
}
