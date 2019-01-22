bool areEquallyStrong(int yL, int yR, int fL, int fR) 
{
    return minmax(yL, yR) == minmax(fL, fR);
}