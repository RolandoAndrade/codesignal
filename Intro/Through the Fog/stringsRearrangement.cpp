int isValid(vector<string> a) 
{
    for (int i=0; i < a.size()-1; i++) 
    {
        int d = 0;
        for (int j = 0; j < a[i].length(); j++) 
            if (a[i][j] != a[i+1][j]) 
                d++;
        if (d != 1) 
            return 0;
    }
    return 1;
}

bool stringsRearrangement(vector<string> v) {
    sort(v.begin(), v.end());
    do 
    {
        if (isValid(v)) 
            return 1;
    } 
    while (next_permutation(v.begin(), v.end()));
    return 0;
}