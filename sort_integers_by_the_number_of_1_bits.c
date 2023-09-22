int less_first(const int *a, const int *b) 
{
    int val_a = *a, val_b = *b;

    int ones_count_a = 0, ones_count_b = 0;

    for( int i = 0; i < 16; i++ ) {     // More than enough for our purposes
        int bit = (int) pow(2, i);

        if( (val_a & bit) == bit ) 
            ones_count_a++;

        if( (val_b & bit) == bit ) 
            ones_count_b++;
    }

    return ones_count_a == ones_count_b ? val_a > val_b : ones_count_a > ones_count_b;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortByBits(int *arr, int arrSize, int *returnSize)
{
    qsort(arr, arrSize, sizeof(*arr), less_first);

    *returnSize = arrSize;

    return arr;
}
