int searchInsert(int *nums, int numsSize, int target)
{
    for( int i = 0; i < numsSize - 1; i++ ) {
        if( nums[i] == target ) {
            return i;
        }

        if( i == 0 && target < nums[i] ) {
            return 0;
        }

        if( (nums[i] < target && target < nums[i + 1]) || (nums[i + 1] < target && target < nums[i]) ) {
            return i + 1;
        }
    }

    return numsSize;
}
