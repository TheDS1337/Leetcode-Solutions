/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double *convertTemperature(double celsius, int *returnSize)
{
    double *temps = malloc(2 * sizeof(double));

    temps[0] = celsius + 273.15;
    temps[1] = 1.8 * celsius + 32.0;

    *returnSize = 2;
    
    return temps;
}
