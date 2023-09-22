int less_first(const int *a, const int *b) 
{
    return *a - *b > 0;
}

int minOperations(int *nums, int numsSize, int *numsDivide, int numsDivideSize)
{
    qsort(nums, numsSize, sizeof(*nums), less_first);

    int i, j, delete_count = 0;
    bool last_deleted = false;
    
    for( i = 0; i < numsSize; i++ ) {
        if( i > 0 && nums[i] == nums[i - 1] ) {
            if( last_deleted )
                delete_count++;

            continue;
        }

        for( j = 0; j < numsDivideSize; j++ ) {
            if( numsDivide[j] % nums[i] != 0 ) 
                break;
        }

        if( j == numsDivideSize )
            break;
            
        last_deleted = true;
        delete_count++;
    }

    return delete_count == numsSize ? -1 : delete_count;
}
