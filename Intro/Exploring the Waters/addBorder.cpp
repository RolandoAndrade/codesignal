vector<string> addBorder(vector<string> p) 
{
    string a="";
    for(int i=0;i<p[0].size()+2;i++) a+="*";
    for(int i=0;i<p.size();i++) p[i]="*"+p[i]+"*";
    p.insert(p.begin(),a);
    p.push_back(a);
    return p;
}