vector<int> concatenateArrays(vector<int> a, vector<int> b) 
{
    a.insert(end(a),begin(b),end(b));
    return a;
}
