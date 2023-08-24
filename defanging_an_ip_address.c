char *defangIPaddr(char *address)
{
    int len = strlen(address);
    int len_deranged = len + 3 * 2;

    char *defranged_address = malloc((len_deranged + 1) * sizeof(char));
    defranged_address[len_deranged] = '\0';

    for( int i = 0, j = 0; i < len; i++, j++ ) {

        if( address[i] == '.' ) {
            defranged_address[j] = '[';
            defranged_address[++j] = '.';
            defranged_address[++j] = ']';
            continue;
        }
 
        defranged_address[j] = address[i];
    }

    return defranged_address;
}
