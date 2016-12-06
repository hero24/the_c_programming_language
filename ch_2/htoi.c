#include <stdio.h>
enum TYPES {NONE=0,DIGIT,LOWER,UPPER};
int get_type(char c)
{
    int type = NONE;
    if(c >=  '0' && c <= '9') 
        type = DIGIT;
    else if(c >= 'a' && c <= 'f')
        type = LOWER;
    else if(c >= 'A' && c <= 'F')
        type = UPPER;
    return type;
}
int htoi(char s[])
{
    int i,value,type;
    value = 0;
    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;
    else
        i = 0;
    for(;(type = get_type(s[i]));++i){
          switch(type){
               case DIGIT:
                    value = 16 * n + s[i] - '0';
                    break;
               case LOWER:
                    value = 16 * n + ((s[i] - 'a')+10);
                    break;
               case UPPER:
                    value = 16 * n + ((s[i] - 'A')+10);
                    break;
          }
          
    }
    return n;
}
