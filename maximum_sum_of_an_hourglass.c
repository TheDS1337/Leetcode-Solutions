int maxSum(int **grid, int gridSize, int *gridColSize)
{
    int i, j, sum, max_sum = 0;

    for( i = 0; i < gridSize - 2; i++ ) {
        for( j = 0; j < gridColSize[i] - 2; j++ ) {
            sum =   grid[i][j]      +   grid[i][j + 1]      + grid[i][j + 2];
            sum +=                      grid[i + 1][j + 1];
            sum +=  grid[i + 2][j]  +   grid[i + 2][j + 1]  + grid[i + 2][j + 2];

            if( sum > max_sum )
                max_sum = sum;
        }
    }

    return max_sum;
}
