int distanceBetweenBusStops(int *distance, int distanceSize, int start, int destination)
{
    int dist_1 = 0, dist_2 = 0;
    int s = start > destination ? destination : start;
    int d = start <= destination ? destination : start;

    for( int i = 0; i < distanceSize; i++ ) {
        if( i < s || i >= d )
            dist_2 += distance[i];
        else
            dist_1 += distance[i];
    }

    return dist_1 > dist_2 ? dist_2 : dist_1;
}
