int makeArrayConsecutive2(vector<int> s) 
{
    sort(s.begin(),s.end());
    int a=0;
    for(int i=0;i<s.size()-1;i++)
        a+=s[i+1]-s[i]-1;
    return a;
}