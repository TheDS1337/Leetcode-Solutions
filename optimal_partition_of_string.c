int partitionString(char *s)
{
    int count = 1;
    char *i, *j;

    for( i = s; *i != '\0'; i++ ) {
        for( j = s; j != i; j++ ) {
            if( *j == *i ) {
                count++;
                s = i;
                break;
            }
        }
    }

    return count;
}
