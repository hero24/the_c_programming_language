#include <stdio.h>
#define SPACES 4
/*
  "Not all treasure is silver and gold mate"
   ~ Jack Sparrow
 */
int main()
{
    // Remove tabs from input, replace by SPACES amount of spaces.
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
    return 0;
}
