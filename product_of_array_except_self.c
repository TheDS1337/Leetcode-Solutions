/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *productExceptSelf(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int *answer = NULL;

    int i, zeros = 0, prod = 1;

    for( i = 0; i < numsSize; i++ )
        if( nums[i] == 0 )
            zeros++;
        else
            prod *= nums[i];

    if( zeros > 1 )
        return calloc(numsSize, sizeof(*nums));
    else {
        answer = malloc(numsSize * sizeof(*nums));

        if( zeros == 0 ) {
            for( i = 0; i < numsSize; i++ )
                answer[i] = prod / nums[i];
        } else {
            for( i = 0; i < numsSize; i++ ) {        
                if( nums[i] == 0 )
                    answer[i] = prod;
                else 
                    answer[i] = 0;
            }
        }
    }

    return answer;
}
