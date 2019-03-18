vector<int> metroCard(int d) 
{
    if(d==30)
        return vector({31});
    if(d==28)
        return vector({30});
    return vector({28,30,31});
}
