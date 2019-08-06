int magicalWell(int a, int b, int n) {
    return n ? magicalWell(a+1,b+1,n-1) + a * b : 0;
}