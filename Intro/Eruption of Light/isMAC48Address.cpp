int isMAC48Address(string s) 
{
    return regex_match(s,regex("^([0-9A-F][0-9A-F]-){5}[0-9A-F][0-9A-F]$"));
}
