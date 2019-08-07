int increaseNumberRoundness(int n) 
{
    while(!(n%10)) n/=10;
    while(n%10) n/=10;
    return n;
}
