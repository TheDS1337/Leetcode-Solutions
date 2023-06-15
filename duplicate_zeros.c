void duplicateZeros(int *arr, int arrSize)
{
    for( int i = 0; i < arrSize; i++ ) {
        if( arr[i] == 0 ) {
            for( int j = arrSize - 1; j > i + 1; j-- ) {
                arr[j] = arr[j - 1];
            }

            arr[++i] = 0;
        }
    }
}
