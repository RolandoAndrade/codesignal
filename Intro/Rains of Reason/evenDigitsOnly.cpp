bool evenDigitsOnly(int n) 
{
    return n>0?(n%2==0&&evenDigitsOnly(n/10)):1;
}
