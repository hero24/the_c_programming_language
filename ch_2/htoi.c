#include <stdio.h>
enum TYPES {NONE=0,DIGIT,LOWER,UPPER};

int is_digit(char i)
{
    return i >=  '0' && i <= '9' ? DIGIT:NONE;
}
int is_lower(char i)
{
    return i >= 'a' && i <= 'f' ? LOWER:NONE;
}
int is_upper(char i)
{
    return i >= 'A' && i <= 'F' ? UPPER:NONE;
}
int htoi(char s[])
{
    int i,n,type;
    n = 0;
    for(i = 0;(type = is_digit(s[i])) || (type = is_lower(s[i])) || (type = is_upper(s[i]));++i){
          switch(type){
               case DIGIT:
                    n = 16 * n + s[i] - '0';
                    break;
               case LOWER:
                    n = 16 * n + ((s[i] - 'a')+10);
                    break;
               case UPPER:
                    n = 16 * n + ((s[i] - 'A')+10);
          }
          
    }
    return n;
}
