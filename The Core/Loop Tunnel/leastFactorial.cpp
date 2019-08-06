int leastFactorial(int n) {
    int r = 1;
    for(int i=1;;i++, r*=i) if(r>=n) return r;
}