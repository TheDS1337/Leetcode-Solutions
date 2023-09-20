int less_first(const int *a, const int *b) 
{
    return *a > *b;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *singleNumber(int *nums, int numsSize, int *returnSize)
{
    qsort(nums, numsSize, sizeof(*nums), less_first);

    int *sing_nums = malloc(2 * sizeof(int));
    int i, j;

    for( i = 1, j = 0; i < numsSize; i++ ) {
        if( nums[i] == nums[i - 1] )
            continue;

        if( i + 1 >= numsSize || nums[i] != nums[i + 1] )
            sing_nums[j++] = nums[i];
    }

    if( j < 2 )
        sing_nums[j] = nums[0];

    *returnSize = 2;

    return sing_nums;
}
