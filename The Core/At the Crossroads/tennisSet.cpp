int tennisSet(int a, int b) 
{
    if(a>b) swap(a,b);
    return b-a>=2?b==6||b==7&&a==5:b==7&&b!=a;
}
