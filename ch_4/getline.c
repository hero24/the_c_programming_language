/*
 * Even Castles made of sand, fall into the sea, eventually. 
 * ~ Jimi Hendrix
 */

#include <stdio.h>
/* 
  get line from input to s, return length
  no string length validation.
*/
int getline(char string[])
{
    int c,i = 0;
    while((c=getchar()) != EOF && c != '\n'){
                        string[i++] = c;
    }
    if(c == '\n'){
         string[i++] = c;
    }
    s[i] = '\0';
    return i
    
}
/* 
  get line from input to s, return length
  string length validation - make sure you do not write to place
  in the array that does not exist.
*/
int getline(char string[],int limit)
{
    int c,i = 0;
    while(--limit > 0 && (c=getchar()) != EOF && c != '\n'){
                        string[i++] = c;
    }
    if(c == '\n'){
         string[i++] = c;
    }
    s[i] = '\0';
    return i
    
}
