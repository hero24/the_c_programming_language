/*
    "If there's something wrong, those who have the ability to take action have the responsibility to take action. "
    ~ Ben Gates @ National Treasure
*/
int strend(char *s, char *t)
{
    int len_s, len_t = len_s = 0;
    while(*s++ != '\0') len_s++;
    while(*t++ != '\0') len_t++;
    for(;len_t--;s--,t--);
    for(;*s++ == *t++;)
        if(*s == '\0') return 1;
    return 0;
}