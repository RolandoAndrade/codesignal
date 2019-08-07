int rounders(int n) {
    int p = 1;
    while(n>10)
    {
        if(n%10>=5) n+=10;
        p*=10;
        n/=10;
    }
    return n*p;
}
