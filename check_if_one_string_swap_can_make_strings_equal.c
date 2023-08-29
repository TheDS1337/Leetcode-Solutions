bool areAlmostEqual(char *s1, char *s2)
{
    int len = strlen(s1);
    int not_equal = 0;
    int first_not_equal = -1;
    int last_not_equal = -1;

    for( int i = 0; i < len; i++ ) {
        if( s1[i] != s2[i] ) {
            if( first_not_equal == -1 )
                first_not_equal = i;
            else if( last_not_equal == -1 )
                last_not_equal = i;

            not_equal++;

            if( not_equal > 2 )
                return false;
        }
    }

    return not_equal == 0 || (not_equal == 2 && s1[last_not_equal] == s2[first_not_equal] && s1[first_not_equal] == s2[last_not_equal]); 
}
