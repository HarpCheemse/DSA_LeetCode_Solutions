int romanToInt(char* s) {
    int res = 0;
    int Roman[7] = {'I','V','X','L','C','D','M'};
    int value[7] = {1,5,10,50,100,500,1000};
    if(strlen(s) == 1)
    {
        for(int i = 0; i<7; i++)
        if(s[0] == Roman[i]) return value[i];
    }
    for(int i=strlen(s)-1; i>0; i--)
    {
        int cur;
        int next;
        for(int j = 0; j<7; j++)
        {
            if(s[i] == Roman[j]) cur = j;
            if(s[i-1] == Roman[j]) next = j;
        }
        if(value[cur]>value[next])
        {
            res += value[cur] - value[next];
            i--;
        }
        else res += value[cur];
    }
    int cur, prev;
    for(int j = 0; j<7; j++)
    {
        if(s[0] == Roman[j]) cur = j;
        if(s[1] == Roman[j]) prev = j;
    }
    if(value[cur] >=  value[prev]) res += value[cur]; 
    return res;
}