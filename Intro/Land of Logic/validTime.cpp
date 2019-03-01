int validTime(string t) 
{
    int h=stoi(t.substr(0,2)),m=stoi(t.substr(3));
    return h<24&&m<60;
}