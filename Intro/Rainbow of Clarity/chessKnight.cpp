int v(int a,int b)
{
    return 'a'<=a&&a<='h'&&'0'<b&&b<'9';
}

int chessKnight(string c) 
{
    return v(c[0]-2,c[1]-1)+v(c[0]-2,c[1]+1)+v(c[0]-1,c[1]-2)+v(c[0]-1,c[1]+2)+
        v(c[0]+2,c[1]-1)+v(c[0]+2,c[1]+1)+v(c[0]+1,c[1]-2)+v(c[0]+1,c[1]+2);
}
