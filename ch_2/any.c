/*
 * "You may delay, but time will not."
 *  ~  Benjamin Franklin
 */


/* 
 * returns the first location in the s1 
 * where any character from s2 occurs.
 */
 int any(char s1[],char s2[])
 {
     int i,j;
     i = j = 0;
     while(s1[i] != '\0'){
         while(s2[j] != '\0'){
             if(s1[i] == s2[j])
                 return i;
             j++;
         }
         i++;
         j = 0;
     }
     return -1;
 }
