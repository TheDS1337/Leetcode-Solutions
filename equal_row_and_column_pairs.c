int equalPairs(int **grid, int gridSize, int *gridColSize)
{
    int i, j, l, count = 0;

    for( i = 0; i < gridSize; i++ ) {
        for( j = 0; j < gridSize; j++ ) {
            for( l = 0; l < gridSize; l++ ) {
                if( grid[i][l] != grid[l][j] )
                    break;
            }

            if( l == gridSize )
                count++;
        }
    }

    return count;
}
