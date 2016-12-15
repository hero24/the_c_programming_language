/*
 * Music is my religion. 
 * ~ Jimi Hendrix
 */
/* return index of the rightmost occourance of t in s */
int strrindex(char string[], char pattern[])
{
    int i,j,k, previous = -1;
    for(i=0;string[i] != '\0';i++){
                      for(j=i,k=0;pattern[k] != '\0' && string[j] ==  pattern[k];j++,k++);
                      if(k > 0 && pattern[k] == '\0'){
                           previous = i;
                      }
    }
    return previous;
}
