int removeElement(int *nums, int numsSize, int val)
{
    int valC = 0;

    for( int i = 0; i < numsSize; i++ ) {
        if( nums[i] == val ) {
            valC++;
            continue;
        }

        if( valC > 0 ) {
            nums[i - valC] = nums[i];
        }
    }

    return numsSize - valC;
}
