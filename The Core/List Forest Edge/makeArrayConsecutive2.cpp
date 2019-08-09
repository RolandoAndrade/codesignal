int makeArrayConsecutive2(vector<int> s) {
    sort(begin(s),end(s));
    return s.back()-s[0]-s.size()+1;
}
