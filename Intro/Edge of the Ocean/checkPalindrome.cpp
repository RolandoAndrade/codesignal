int adjacentElementsProduct(vector<int> a) 
{
    int max=a[0]*a[1];
    for(int i=1;i<a.size()-1;i++)
    {
        max=a[i]*a[i+1]>max?a[i]*a[i+1]:max;
    }
    return max;
}