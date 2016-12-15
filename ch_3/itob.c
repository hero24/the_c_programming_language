/*
 * I've been imitated so well I've heard people copy my mistakes.
 * ~Jimi Hendrix
 */

/* converts integer a into string n in base b */
void itob(int n,char s[],int b)
{
    int i, sign;
    if((sign = n) < 0){
        n = -n;
    }
    i = 0;
    do {
        s[i++] = n % b + (((n % b) > 9) ?  'A'-10:'0');
    } while((n/=b) > 0);
    if(sign<0){
        s[i++] = '-';
    }
    int j = 0;
    s[i] =  '\0';
    while(j != i){
        char temp = s[--i];
        s[i] = s[j];
        s[j++] = temp;
    }\
}
