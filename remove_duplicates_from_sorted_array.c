int removeDuplicates(int *nums, int numsSize)
{
    if( numsSize == 0 ) 
        return 0;

    int i, j, val;

    for( i = 1, j = 1; i < numsSize; i++ ) {
        val = nums[i];

        if( val != nums[i - 1] )
            nums[j++] = val;
    }

    return j;
}
