#include <stdio.h>

int main()
{
    char c;
    while((c = getchar()) != EOF){
        putchar(c);
        if(c == ' ' || c == '\t' || c == '\n')
            putchar('\n'); 
    }
}
