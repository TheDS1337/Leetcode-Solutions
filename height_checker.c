int less_first(const int *a, const int *b) 
{
    return *a - *b > 0;
}

int heightChecker(int *heights, int heightsSize)
{
    int before_sorting[heightsSize];

    for( int i = 0; i < heightsSize; i++ )
        before_sorting[i] = heights[i];

    qsort(heights, heightsSize, sizeof(*heights), less_first);

    int incorrect_indices = 0;

    for( int i = 0; i < heightsSize; i++ ) {
        if( heights[i] == before_sorting[i] )
            continue;

        incorrect_indices++;
    }

    return incorrect_indices;
}
