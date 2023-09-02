void rotate(int *nums, int numsSize, int k)
{
    if( k >= numsSize ) 
        k %= numsSize;

    if( k < 1 )
        return;

    int temp[k];

    for( int i = 0; i < k; i++ )
        temp[i] = nums[numsSize - k + i];


    for( int i = numsSize - 1; i >= k; i-- )
        nums[i] = nums[i - k];

    for( int i = 0; i < k; i++ )
        nums[i] = temp[i];
}
