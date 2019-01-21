vector<string> allLongestStrings(vector<string> ia) 
{
    vector<string>r;
    int min=0;
    for(int i=0;i<ia.size();i++)
        if(ia[i].size()>=min)
        {
            if(ia[i].size()>min)
            {
                r.clear();
                min=ia[i].size();
            }
                
            r.push_back(ia[i]);
        }
    return r;
            
}