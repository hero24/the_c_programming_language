/*
 * Do not fear mistakes. You will know failure. Continue to reach out. 
 * ~ Benjamin Franklin
 */


/* squeeze: delete each character in s1 that matches character in s2 */
void squeeze(char s1[], char s2[])
{
    int i,j,k;
    i = j = k = 0;
    while(s2[k] != '\0'){
        while(s1[i] != '\0'){
            if(s2[k] != s1[i])
                s1[j++] = s1[i];
            i++;
        }
        k++;
        s1[j] = '\0';
        i = j = 0;
    }
}
