int sumOddLengthSubarrays(int *arr, int arrSize)
{
    const int odd_len = (arrSize + 1) / 2;
    int i, j, k, sum = 0;

    for( i = 1; i <= arrSize; i += 2 ) {
        for( j = 0; j <= arrSize - i; j++ ) {
            for( k = j; k < j + i; k++ )
                sum += arr[k];
        }
    }

    return sum;
}
