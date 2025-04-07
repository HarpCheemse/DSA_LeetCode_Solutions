bool isSubsequence(char* s, char* t) {
    int stop = 0;
    int result = 0;
    int curr = 0;
    int length_s = strlen(s);
    int length_t = strlen(t);
    for(int i = 0; i< length_s && stop != 1; i++)
    {
        while(s[i] != t[curr])
        {
            if(curr == length_t) 
            {
                stop = 1;
                break;
            }
            if(length_s-i> length_t-curr) return false;           //return false when there are more to check in s than in t eg abc : ab;
            curr++;
        }
        if(s[i] == t[curr])
        {
            result++;
            curr++;
        }
    }
    if(length_s == result) return true;
    else return false;
}