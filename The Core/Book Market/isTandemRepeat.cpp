int isTandemRepeat(string s) {
    return s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size());
}
