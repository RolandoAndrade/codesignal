int knapsackLight(int v1, int w1, int v2, int w2, int mw) 
{
    if(w1+w2<=mw)
        return v1+v2;
    if(w1<=mw&&w2>mw)
        return v1;
    if(w2<=mw&&w1>mw)
        return v2;
    if(w1>mw&&w2>mw)
        return 0;
    return max(v1,v2);
}
