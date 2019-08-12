int rectangleRotation(int a, int b) 
{
    a/=sqrt(2);
    b/=sqrt(2);
    int q = 2*a*b+a+b;
    return q%2?q:q+1;
}
