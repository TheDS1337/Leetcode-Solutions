/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int *returnSize)
{
    *returnSize = n;
    char **answer = malloc(n * sizeof(char *));

    for( int i = 1; i <= n; i++ ) {
        if( i % 3 == 0 && i % 5 == 0 ) 
            answer[i - 1] = "FizzBuzz";
        else if( i % 3 == 0 )
            answer[i - 1] = "Fizz";
        else if( i % 5 == 0 )
            answer[i - 1] = "Buzz";
        else {
            char *num = malloc(32 * sizeof(char));
            sprintf(num, "%i", i);

            answer[i - 1] = num;
        }
    }

    return answer;
}
