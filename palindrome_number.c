bool isPalindrome(int x)
{
    char num[32];
    sprintf(num, "%d", x);

    int len = strlen(num);
    for( int i = 0, j = len - 1; i < (int) (len / 2); i++, j-- )
    {
        if( num[i] != num[j] ) {
            return false;
        }
    }

    return true;
}
