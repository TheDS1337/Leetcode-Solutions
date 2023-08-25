int xorOperation(int n, int start)
{
    int xor_sum = 0;

    for( int i = 0; i < n; i++ )
        xor_sum ^= start + 2 * i;

    return xor_sum;
}
