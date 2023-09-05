int removeDuplicates(int *nums, int numsSize)
{
    if( numsSize == 0 ) 
        return 0;

    int i, j, max = nums[0], max_index = 0;

    for( i = 0; i < numsSize; i++ ) {
        for( j = i + 1; j < numsSize; j++ ) {
            if( nums[j] > nums[i] ) {
                nums[i + 1] = nums[j];
                break;
            }
        }

        if( nums[i] > max ) {
            max = nums[i];
            max_index = i;
        }
    }

    return max_index + 1;
}
