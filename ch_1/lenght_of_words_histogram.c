#include <stdio.h>
#define ASTERIX '*'
int main()
{
    char c;
    int word_length = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
             int i;
             for(i = 0;i<word_length;i++){
                putchar(ASTERIX);
             }
             putchar('\n');
             word_length = 0;
        }
        else {
            word_length++;
        }
    }
    return 0;
}

