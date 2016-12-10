void escape(char s[], char t[])
{
     int i,k;
     i = k = 0;
     while(s[i] != '\0'){
                char c = 0;
                switch(s[i]){
                             case '\a':
                                  c = 'a';
                                  break;
                             case '\b':
                                  c = 'b';
                                  break;
                             case '\f':
                                  c = 'f';
                                  break;
                             case '\n':
                                  c = 'n';
                                  break;
                             case '\r':
                                  c = 'r';
                                  break;
                             case '\t':
                                  c = 't';
                                  break;
                             case '\v':
                                  c = 'v';
                                  break;
                             default:
                                  t[k++] = s[i++];
                                  break;                        
                }
                if(c){
                      t[k++] = '\\';
                      t[k++] = c;
                      i++;                      
                }
     }
     t[k] = '\0';
     
}
