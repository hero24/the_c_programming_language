#include <stdio.h>
/*
  "Every language teaches you something, so learning a language is never wasted, 
                         especially if it's different in more than just syntactic trivia."
  ~ Brian Kernighan
*/
int main()
{
    char c;
    while((c = getchar()) != EOF){
        putchar(c);
        if(c == ' ' || c == '\t' || c == '\n')
            putchar('\n'); 
    }
}
