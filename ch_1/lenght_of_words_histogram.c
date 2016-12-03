#include <stdio.h>
#define ASTERIX '*'
/*
  "Object-oriented programming is an exceptionally bad idea which could only have originated in California." 
  ~Edsger Dijkstra
 */
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

