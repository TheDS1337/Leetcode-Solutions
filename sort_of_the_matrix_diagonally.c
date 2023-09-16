int less_first(const int *a, const int *b) 
{
    return *a - *b > 0;
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **diagonalSort(int **mat, int matSize, int *matColSize, int *returnSize, int **returnColumnSizes)
{
  int i, j, colSize = matColSize[0];

  for( i = 0; i < matSize; i++ ) {
    for( j = 0; j < (i == 0 ? colSize : 1); j++ ) {
      int *sort_arr = calloc(matSize, sizeof(int));
      int a, b, l = 0;

      for( a = i, b = j; a < matSize && b < colSize; a++, b++ )      
        sort_arr[l++] = mat[a][b];

      sort_arr = realloc(sort_arr, l * sizeof(int));
      qsort(sort_arr, l, sizeof(int), less_first);

      l = 0;

      for( a = i, b = j; a < matSize && b < colSize; a++, b++ )
        mat[a][b] = sort_arr[l++];

      free(sort_arr);
    }
  }

  *returnSize = matSize;
  *returnColumnSizes = matColSize;

  return mat;
}
