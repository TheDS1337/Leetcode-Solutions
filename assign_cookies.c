
int small_to_big(const int *a, const int *b) 
{
    return *a - *b;
}

int findContentChildren(int *g, int gSize, int *s, int sSize)
{
    size_t content_children = 0, smallest_cookie = 0;

    qsort(g, gSize, sizeof(*g), small_to_big);
    qsort(s, sSize, sizeof(*s), small_to_big);

    for( size_t i = 0; i < gSize; i++ ) {
        for( size_t j = smallest_cookie; j < sSize; j++ ) {
            if( s[j] >= g[i] ) {
                content_children++;
                smallest_cookie = j + 1;
                break;
            }
        }
    }

    return content_children;
}
