// "The standard library saves programmers from having to reinvent the wheel."
//   ~ Bjarne Stroustrup

/* Convert all uppercase letters in string s to lowercase*/
void lower(char s[])
{
    int i;
    for(i = 0;s[i] != '\0';i++)
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] - 'A') + 'a' : s[i];
}
