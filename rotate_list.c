/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *rotateRight(struct ListNode *head, int k)
{
    int len = 1;
    struct ListNode *lp = head;

    if( head == NULL )
        return NULL;

    while( (lp = lp->next) != NULL )
        len++;

    if( k >= len )
        k %= len;

    if( k < 1 )
        return head;

    int temp[k];
    struct ListNode *ps[len];

    int i, j;    

    for( i = 0, j = 0, lp = head; lp != NULL; lp = lp->next, i++)
    {
        ps[i] = lp;

        if( i >= len - k )
            temp[j++] = lp->val;
    }

    for( i = len - 1; i >= k; i-- )
        ps[i]->val = ps[i - k]->val;

    for( i = 0; i < k; i++ )
        ps[i]->val = temp[i];

    return head;
}
