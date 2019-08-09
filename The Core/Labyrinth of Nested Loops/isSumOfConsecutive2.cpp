int isSumOfConsecutive2(int n) {
    int r = 0;
    for (int i = 3; i <= n; i+=2) r+=!(n%i);
    return r;
}
