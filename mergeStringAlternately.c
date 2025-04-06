char * mergeAlternately(char * word1, char * word2){
    int length_a = strlen(word1);
    int length_b = strlen(word2);
    int total_length = length_a + length_b;
    char* res = (char*) malloc(total_length + 1* sizeof(char));
    int count = 0;
    int i;
    while(i<length_a && i <length_b)
    {
        res[count++] = word1[i];
        res[count++] = word2[i++];
    }
    while(i<length_a)
    {
        res[count++] = word1[i++];
    }
    while(i<length_b)
    {
        res[count++] = word2[i++];
    }
    res[total_length] = '\0';
    return res;
}