int sudoku(vector<vector<int>> g) 
{
    int s=45,p=362880;
    
    for(int i=0;i<9;i++)
    {
        int sr=0,pr=1,sc=0,pc=1;
        for(int j=0;j<9;j++)
        {
            sr+=g[i][j];
            pr*=g[i][j];
            sc+=g[j][i];
            pc*=g[j][i];
        }
        if(sr!=sc||sr!=s||pr!=pc||pc!=p)
            return 0;
    }
    for(int i=0;i<9;i+=3)
        for(int j=0;j<9;j+=3)
        {
            int ss=0,pp=1;
            for(int k=i;k<i+3;k++)
                for(int l=j;l<j+3;ss+=g[k][l],pp*=g[k][l],l++);
            if(ss!=s||pp!=p)
                return 0;     
        }
    return 1;
}