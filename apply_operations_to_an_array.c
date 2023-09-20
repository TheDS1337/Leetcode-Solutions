/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *applyOperations(int *nums, int numsSize, int *returnSize)
{
    int i, j, k = 1;

    for( i = 0; i < numsSize - k; i++ ) {
        if( nums[i] == nums[i + 1] ) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }

        if( nums[i] == 0 ) {
            for( j = i--; j < numsSize - 1; j++ )
                nums[j] = nums[j + 1];

            nums[j] = 0;
            k++;
        }
    }

    *returnSize = numsSize;

    return nums;
}
