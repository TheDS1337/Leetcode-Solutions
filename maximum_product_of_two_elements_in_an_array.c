int maxProduct(int *nums, int numsSize)
{
    int max = 0;

    for( int i = 0; i < numsSize; i++ ) {
        int a = nums[i] - 1;
        
        for( int j = i + 1; j < numsSize; j++ ) {
            int prod = a * (nums[j] - 1);

            if( prod > max )
                max = prod;
        }
    }

    return max;
}
