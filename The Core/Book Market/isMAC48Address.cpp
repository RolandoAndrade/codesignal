int isMAC48Address(string s) 
{
    return regex_match(s, regex("^([0-9A-Fa-f]{2}[-]){5}([0-9A-Fa-f]{2})$"));
}