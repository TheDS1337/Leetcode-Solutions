char *addBinary(char *a, char *b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);

    int maxLen = 0;

    if( a[0] == '1' && b[0] == '1' )
        maxLen = fmax(len_a, len_b) + 1;
    else
        maxLen = fmax(len_a, len_b);

    char *sum = malloc((maxLen + 1) * sizeof(char));
    sum[maxLen] = '\0';

    for( int i = maxLen - 1, j = 0, k = 0; i >= 0; i-- ) {
        int bin_a = 0, bin_b = 0;

        k = len_a + i - maxLen;
        if( k >= 0 && a[k] == '1' )
            bin_a = 1;

        k = len_b + i - maxLen;
        if( k >= 0 && b[k] == '1' )
            bin_b = 1;

        int c = bin_a + bin_b + j;

        if( c > 1 ) {
            sum[i] = c == 2 ? '0' : '1';
            j = 1;
        } else {
            sum[i] = c == 1 ? '1' : '0';
            j = 0;
        }
    }

    return strlen(sum) > 1 && sum[0] == '0' ? ++sum : sum;
}
