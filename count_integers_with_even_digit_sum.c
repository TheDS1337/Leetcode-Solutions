int countEven(int num)
{
    int i, j, k, rest, odd, val, count = 0;

    for( i = 2; i <= num; i++ ) {
        for( j = i, k = 1, odd = 0; j > 0; j -= rest, k++ ) {
            rest = j % (int) pow(10, k);
            val = rest * pow(10, 1 - k);

            if( val % 2 == 1 )
                odd++;
        }

        if( odd % 2 == 0 )
            count++;
    }

    return count;
}
