int lengthOfLastWord(char *s)
{
    char *space = NULL;

    while( (space = strrchr(s, ' ')) != NULL ) {
        if( strlen(space) == 1 ) {
            *space = '\0';
            continue;
        }

        return strlen(space) - 1;
    }

    return strlen(s);
} 
