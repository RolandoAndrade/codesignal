int appleBoxes(int k) 
{
    return k?appleBoxes(k-1)+(k%2?-k*k:k*k):0;
}