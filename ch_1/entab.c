#include <stdio.h>
#define SPACES 3
#define CLEAR 0
/*
   "The story of life is quicker than the wink of an eye, the story of love is hello and goodbye…until we meet again" 
   – Jimi Hendrix
 */
int main()
{
    int c, space_count = CLEAR;
    while((c = getchar()) != EOF){
         if(c == ' ' && space_count == SPACES){
             putchar('\t');
             space_count = CLEAR;
         }
         else if(c == ' ' && space_count < SPACES){
             ++space_count;
         }
         else if(c != ' ' && space_count > 0){
             for(;space_count > 0;--space_count){
                 putchar(' ');
             }
             putchar(c);
         }
         else {
            putchar(c);
         }
    }
    return 0;
}
