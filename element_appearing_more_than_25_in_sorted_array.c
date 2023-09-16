int findSpecialInteger(int *arr, int arrSize)
{
  short i, occ = 0;

  for( i = 0; i < arrSize; i++ ) {
    if( i > 0 && arr[i] != arr[i - 1] )
      occ = 0;

    if( ++occ / (float) arrSize > 0.25 )
      return arr[i];
  }

  return arr[0];
}
