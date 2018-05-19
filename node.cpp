/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode**t1=&head;   //指针的地址赋给*指针
        ListNode*t2=head;   //指针赋给指针
        
        for(int i=1;i<n;i++)
        {
            t2=t2->next;
        }
        
        while(t2->next!=NULL)
        {
            t1=&((*t1)->next);
            t2=t2->next;
        }
        
        *t1=(*t1)->next;
        return head;
    }
};
