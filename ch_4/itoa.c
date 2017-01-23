/*
 * No man has a good enough memory to be a successful liar. 
 * ~ Abraham Lincoln
 */

/* converts integer a into string s */

#include <stdio.h>
int itoa(int n,char s[],int index)
{
    if (n < 0){
        s[index++] = '-';
    }
    if(n / 10){
        index = itoa(n / 10,s,index);
    }
    s[index++] = n % 10 + '0';
    s[index] = '\0';
    return index;
}