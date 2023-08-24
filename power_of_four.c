bool isPowerOfFour(int n)
{
    if( n <= 0 )
        return false;

    if( n == 1 ) 
        return true;

    for( long i = 4; i <= n; i *= 4 ) {
        if( i == n )
            return true;
    }

    return false;
}
