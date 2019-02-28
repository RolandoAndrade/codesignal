int knapsackLight(int v1, int w1, int v2, int w2, int mw) 
{
    if(w1+w2<=mw) return v1+v2;
    if(v1>=v2&&w1<=mw) return v1;
    if(v2>=v1&&w2<=mw) return v2;
    if(w1<=mw) return v1;
    if(w2<=mw) return v2;
    return 0;
}
