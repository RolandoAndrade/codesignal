int div(int a,int b)
{
    return a==b || (!(a%b) && div(a/b, b));
}
int isPower(int n) {
    if(n==1) return 1;
    for(int i = 2; i<21;i++)
        if(div(n,i)&&n!=i)
            return 1;
    return 0;
}