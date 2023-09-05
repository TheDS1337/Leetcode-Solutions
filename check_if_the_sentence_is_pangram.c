bool checkIfPangram(char *sentence)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    int alphabet_len = strlen(alphabet);
    int alphabet_count[alphabet_len];

    int i, j;

    bool found_alphabet;

    for( i = 0; i < alphabet_len; i++ )
        alphabet_count[i] = 0;

    for( i = 0; i < strlen(sentence); i++ ) {
        found_alphabet = false;

        for( j = 0; j < alphabet_len; j++ ) {
            if( sentence[i] == alphabet[j] ) {
                found_alphabet = true;
                break;
            }
        }

        if( found_alphabet )
            alphabet_count[j]++;
    }

    for( i = 0; i < alphabet_len; i++ ) {
        if( alphabet_count[i] == 0 )
            return false;
    }


    return true;
}
