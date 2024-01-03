// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

//                                                                                     k is a positive integer and
//                                                                                     is less than or
//                                                                                 equal to the length of the linked list.If the number of nodes is not a multiple of k then left - out nodes,
//     in the end, should remain as it is.

//   You may not alter the values in the list's nodes, themselves may be changed.

//                 Example 1 :

//     Input : head = [ 1, 2, 3, 4, 5 ],
//             k = 2 Output : [ 2, 1, 4, 3, 5 ] Example 2 :

//     Input : head = [ 1, 2, 3, 4, 5 ],
//             k = 3 Output : [3, 2, 1, 4, 5]

class Solution
{
public:
    int length(ListNode * head)
    {
        int len = 0;
        while (head != NULL)
        {
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode *reverseKGroup(ListNode * head, int k)
    {
        if (head == NULL)
            return NULL;
        if (k > length(head))
            return head;

        int count = 0;
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *nextNode = NULL;
        while (count < k)
        {
            nextNode = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextNode;
            count++;
        }

        if (nextNode != NULL)
        {
            head->next = reverseKGroup(nextNode, k);
        }

        return prev;
    }
};