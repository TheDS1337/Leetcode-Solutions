bool isPerfectSquare(int num)
{
    int num_sqrt = sqrt(num);
    return pow(num_sqrt, 2) == num;
}
