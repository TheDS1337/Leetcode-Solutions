bool isBoomerang(int **points, int pointsSize, int *pointsColSize)
{
    for( int i = 0; i < pointsSize; i++ ) {
        for( int j = 0; j < pointsSize; j++ ) {       
            if( j != i ) {
                // y = ax + b
                double a = (points[i][1] - points[j][1]) / (points[i][0] - points[j][0]);
                double b = .5 * ((points[i][1] + points[j][1]) - a * (points[i][0] + points[j][0]));

                for( int k = 0; k < pointsSize; k++ ) {
                    if( k != i && k != j ) {
                        if( (points[k][1] - ((a * points[k][0]) + b)) == 0 ) {
                            return false;
                        }
                    }
                }
            }            
        }
    }

    return true;
}
