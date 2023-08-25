/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode *head)
{
    int i = 0, len = 0;
    struct ListNode *nx = head;

    for( ; nx != NULL; nx = nx->next )
        len++;

    nx = head;    
    int val = 0;

    do
        val += nx->val * pow(2, len - 1 - i++);
    while( (nx = nx->next) != NULL );

    return val;
}
