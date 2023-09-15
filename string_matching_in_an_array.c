/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **stringMatching(char **words, int wordsSize, int *returnSize)
{
    int str_indices[wordsSize];
    int i, j, k, count = 0;

    for( i = 0; i < wordsSize; i++ ) {
        str_indices[i] = -1;

        for( j = 0; j < i; j++ ) {
            if( strstr(words[i], words[j]) != NULL ) {
                for( k = 0; k < count; k++ ) {
                    if( str_indices[k] == j )
                        break;
                }

                if( k == count )
                    str_indices[count++] = j;
            } else if( strstr(words[j], words[i]) != NULL ) {
                for( k = 0; k < count; k++ ) {
                    if( str_indices[k] == i )
                        break;
                }

                if( k == count )
                    str_indices[count++] = i;
            }
                
        }
    }

    *returnSize = count;

    char **strs = calloc(count, sizeof(char *));

    for( i = 0; i < count; i++ )
        strs[i] = words[str_indices[i]];

    return strs;
}
