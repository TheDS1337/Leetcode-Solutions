int less_first(const int *a, const int *b) 
{
    return *a - *b > 0;
}

bool asteroidsDestroyed(int mass, int *asteroids, int asteroidsSize)
{
    int i;
    long total_mass = mass, val;

    qsort(asteroids, asteroidsSize, sizeof(*asteroids), less_first);

    for( i = 0; i < asteroidsSize; i++ ) {
        val = asteroids[i];

        if( val > total_mass )
            return false;

        total_mass += val;
    }

    return true;
}
