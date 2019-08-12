int sss(int x)
{
    return x>0?sss(x/10)+x%10:0;
}

int con(int a, int b)
{
    int p = sss(a), q = sss(b);
    return b - q <= a && a<= b + q && a - p <= b && b <= a+p;
}

int comfortableNumbers(int l, int r) 
{
   int a = 0;
    for(int i = l; i <= r; i++)
        for(int j = i + 1; j <= r; j++)
            a+=con(i, j);
    return a;
}