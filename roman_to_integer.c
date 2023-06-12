int romanToInt(char *s)
{
    int romanToDigit(char roman) 
    {
        switch( roman ) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                break;
        }

        return 0;
    }

    int result = 0;

    int len = strlen(s);
    for( int i = 0; i < len; i++ )
    {
        if( i == len - 1 )
        {
            result += romanToDigit(s[i]);
            break;
        }

        int curr = romanToDigit(s[i]);
        int next = romanToDigit(s[i + 1]);

        if( curr < next ) {
            result -= curr;
        } else {
            result += curr;
        }
    }

    return result;
}
