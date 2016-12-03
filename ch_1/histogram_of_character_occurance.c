#include <stdio.h>
#include <limits.h>
#define ASTERIX '*' 
int main()
{
    int char_apperance[UCHAR_MAX+1];
    int i;
    int c;
    for(i = 0;i<(UCHAR_MAX+1);i++)
        char_apperance[i] = 0;
    while((c = getchar()) != EOF){
        ++char_apperance[c];
    }
    for(i = 0;i<(UCHAR_MAX)+1;i++){
        int j = 0;
        putchar(i);
        putchar(':');
        for(j = 0;j<char_apperance[i];j++){
           putchar(ASTERIX);
        }
        putchar('\n');
    }
}
