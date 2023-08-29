bool checkPerfectNumber(int num)
{
    int sum = 0;

    for( int i = 1; i < num; i++ ) {
        if( (i & 1) == ~(num & 1) )
            continue;

        if( num % i == 0 )
            sum += i;
    }

    return sum == num;
}
