#include <stdio.h>
#define SPACES 4
int main()
{
    int c;
    while ((c = getchar()) != EOF){
        if(c == '\t'){
            int i;
            for(i = 0;i<SPACES;i++){
                putchar(' ');
            }
        }
        else{
            putchar(c);
        }
    }
}
