/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteDuplicates(struct ListNode *head)
{
    for( struct ListNode *i = head, *prev = head; i != NULL; i = i->next ) {
        struct ListNode *k = i;

        for( struct ListNode *j = head; j != i; j = j->next ) {
            if( j->val == i->val ) {
                prev->next = i->next;
                k = prev;
                break;
            }
        }

        prev = k;
    }

    return head; 
}
