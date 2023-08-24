bool isBoomerang(int **points, int pointsSize, int *pointsColSize)
{
    for( int i = 0; i < pointsSize; i++ ) {
        for( int j = 0; j < pointsSize; j++ ) {       
            if( j != i ) {
                for( int k = j; k < pointsSize; k++ ) {
                    if( k != i && k != j ) {
                        return (points[i][0] - points[j][0]) * (points[j][1] - points[k][1]) != (points[i][1] - points[j][1]) * (points[j][0] - points[k][0]); 
                    }
                }
            }            
        }
    }

    return true;
}
