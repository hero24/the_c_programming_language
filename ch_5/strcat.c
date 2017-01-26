// "Everything must be made as simple as possible. But not simplier." ~ Albert Einstein

void strcat(char *s, char *t)
{
    while(*++s != '\0');
    while((*s++ = *t++) != '\0');
}
