int maxCount(int *banned, int bannedSize, int n, int maxSum)
{
    int i, j, k, max, sum, choosen_integers[n];

    for( i = 0, j = 0, sum = 0; i < n; i++ ) {
        if( sum >= maxSum )
            break;

        bool is_banned = false;

        for( k = 0; k < bannedSize; k++ ) {
            if( banned[k] == i + 1 ) {
                is_banned = true;
                break;
            }
        }

        if( !is_banned ) {
            choosen_integers[j++] = i + 1;
            sum += i + 1;
        }
    }

    while( sum > maxSum ) {
        max = 0;
        sum = 0;

        for( i = 0; i < j; i++ ) {
            if( choosen_integers[i] > max )
                max = choosen_integers[i];

            sum += choosen_integers[i];
        }

        sum -= max;
        j--;
    }

    return j;
}
