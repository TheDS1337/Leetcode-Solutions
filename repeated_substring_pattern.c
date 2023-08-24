bool repeatedSubstringPattern(char *s)
{
    int len = strlen(s);

    for( int i = 1; i < 1 + len / 2; i++ ) {
        if( len % i != 0 ) 
            continue;

        char substr[i + 1];

        for( int j = 0; j < len; j += i ) {
            strncpy(substr, &s[j], i);

            bool constr = true;

            for( int k = 0; k < len; k += i ) {
                if( k == j )
                    continue;
                    
                if( strncmp(&s[k], substr, i) != 0 ) {
                    constr = false;
                    break;
                }
            }

            if( constr )
                return true;
        }
    }

    return false;
}
