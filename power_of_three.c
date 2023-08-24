bool isPowerOfThree(int n)
{
    if( n <= 0 )
        return false;

    if( n == 1 ) 
        return true;

    for( long i = 3; i <= n; i *= 3 ) {
        if( i == n )
            return true;
    }

    return false;
}
