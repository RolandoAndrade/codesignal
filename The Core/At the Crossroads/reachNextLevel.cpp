int reachNextLevel(int e, int t, int r) 
{
    return max(e+r+1-t,0);
}