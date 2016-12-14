/*
 *  Louis, I think this is the beginning of a beautiful friendship.
 *  ~  Rick Blaine @ CASABLANCA
 */

/* expand ranges like A-Z in s1 and write to s2*/
void expand(char s1[], char s2[])
{
     int i,j;
     for(i = 0,j=0; s1[i] != '\0';i++){
           if(s1[i+1] == '-'){
                      char c = s1[i++];
                      char r = s1[++i];
                      while(c <= r){
                              s2[j++] = c++;
                      }
           }
           else{
                s2[j++] = s1[i];
           }
     }
     s2[j] = '\0';
}
