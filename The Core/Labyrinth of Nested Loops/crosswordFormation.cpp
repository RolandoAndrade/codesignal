int ppp(auto *w) 
{
    int r = 0;
    for (int i = 0; i < (*w)[0].length(); i++)
        for (int j = 0; j < (*w)[1].length(); j++) 
            if ((*w)[0][i] == (*w)[1][j]) 
                for (int k = j+2; k < (*w)[1].length(); k++)
                    for (int h = 0; h < (*w)[2].length(); h++) 
                        if ((*w)[1][k] == (*w)[2][h]) 
                            for (int x = h+2; x < (*w)[2].length(); x++)
                                for (int y = 0; y < (*w)[3].length(); y++) 
                                    if ((*w)[2][x] == (*w)[3][y]) {
                                        int width = k - j;
                                        int height = x - h;
                                        r+=((*w)[3][y - width] == (*w)[0][i + height])&&(y - width >= 0 &&
                                            i + height < (*w)[0].length());
                                    }
    return r;
}
int crosswordFormation(auto words) 
{
    sort(words.begin(), words.end());
    int cont = 0;
    do
    {
        cont += ppp(&words);
    } while (next_permutation(words.begin(), words.end()));
    
    return cont;
}