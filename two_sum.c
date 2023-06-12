/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
  *returnSize = 2;
  int *returnInds = malloc(2 * sizeof(int));

  for( int i = 0; i < numsSize; i++ ) {
    for( int j = i + 1; j < numsSize; j++) {
      if( nums[i] + nums[j] == target ) {
        returnInds[0] = i;
        returnInds[1] = j;

        break;
      }
    }
  }

  return returnInds;
