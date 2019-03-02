int sumUpNumbers(string s) 
{
  int r=0;
  smatch m; 
  while (regex_search(s,m,regex("\\d+")))
  {
    r+=stoi(m[0]);
    s=m.suffix().str();
  }
  return r;
}
