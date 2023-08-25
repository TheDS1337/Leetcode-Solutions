/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *runningNum = malloc(numsSize * sizeof(*nums));
    int sum = 0;

    for( int i = 0; i < numsSize; i++ ) {
        sum += nums[i];
        runningNum[i] = sum;
    }

    *returnSize = numsSize;

    return runningNum;
}
