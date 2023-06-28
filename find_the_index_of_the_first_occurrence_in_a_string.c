int strStr(char *haystack, char *needle)
{
    char *needle_in_haystack = strstr(haystack, needle);

    if( needle_in_haystack == NULL )
    {
        return -1;
    }

    return needle_in_haystack - haystack;
}
