/*
 * use a character table for value mapping and scan the input string.
 */
int getRomanVal(char c)
{
    char val_char[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int val_int[] = { 1, 5, 10, 50, 100, 500, 1000};
    for(i = 0; i < sizeof(val_char); i++)
    {
        if(c == val_char[i])
            return val_int[i];
    }
    return 0;
}
int romanToInt(char * s){
    int ret = 0;
    int tmp_a, tmp_b;

    while(*s != 0)
    {
        tmp_a = getRomanVal(*s);
        if(*(s+1) == 0)
            return ret + tmp_a;
        else if (tmp_a < getRomanVal(*(s+1)))
            ret -= tmp_a;
        else
            ret += tmp_a;
    }
    return ret;
}
