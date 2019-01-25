bool variableName(string name) 
{
    return regex_match(name,regex("[_a-zA-Z][_a-zA-Z0-9]*"));
}