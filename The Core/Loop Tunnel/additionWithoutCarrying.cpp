int additionWithoutCarrying(int a, int b) {
    return a||b?additionWithoutCarrying(a/10,b/10)*10+(a+b)%10:0;
}