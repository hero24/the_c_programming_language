/*
 * An algorithm must be seen to be believed. 
 * ~ Donald Knuth
 */

/* unescape escaped string */
void unescape(char s[], char t[])
{
     int i,k;
     i = k = 0;
     int escaped = 0;
     while(s[i] != '\0'){
                switch(s[i]){
                             case '\\':
                                  i++;
                                  escaped = 1;
                                  break;
                             case 'b':
                                  t[k++] = (escaped) ? '\b':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             case 'f':
                                  t[k++] = (escaped) ? '\f':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             case 'n':
                                  t[k++] = (escaped) ? '\n':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             case 'r':
                                  t[k++] = (escaped) ? '\r':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             case 't':                                  
                                  t[k++] = (escaped) ? '\t':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             case 'v':                                  
                                  t[k++] = (escaped) ? '\v':s[i];
                                  escaped = 0;
                                  i++;
                                  break;
                             default:
                                  t[k++] = s[i++];
                                  break;                        
                }
     }
     t[k] = '\0';
     
}
